#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

//these libraries to get the thoughts in excel sheet
#include <QLabel>
#include <QString>
#include <QVector>
#include <QPair>
#include <QRandomGenerator>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    int randomNumber = QRandomGenerator::global()->bounded(1, 61); //to generatte random number to select the quote

private slots:
    void on_new_box_clicked();

private:
    Ui::MainWindow *ui;
    QVector<QPair<QString, QString>> stoicThoughts = {
        { "The impediment to action advances action. What stands in the way becomes the way.", "Marcus Aurelius" },
        { "You have power over your mind - not outside events. Realize this, and you will find strength.", "Marcus Aurelius" },
        { "Waste no more time arguing about what a good man should be. Be one.", "Marcus Aurelius" },
        { "He who fears death will never do anything worth of a man who is alive.", "Seneca" },
        { "It is not death that a man should fear, but he should fear never beginning to live.", "Marcus Aurelius" },
        { "If you are distressed by anything external, the pain is not due to the thing itself, but to your estimate of it; and this you have the power to revoke at any moment.", "Marcus Aurelius" },
        { "Luck is what happens when preparation meets opportunity.", "Seneca" },
        { "We suffer more often in imagination than in reality.", "Seneca" },
        { "How long are you going to wait before you demand the best for yourself?", "Epictetus" },
        { "First say to yourself what you would be; and then do what you have to do.", "Epictetus" },
        { "The more we value things outside our control, the less control we have.", "Epictetus" },
        { "Man is not worried by real problems so much as by his imagined anxieties about real problems.", "Epictetus" },
        { "It is not because things are difficult that we do not dare; it is because we do not dare that things are difficult.", "Seneca" },
        { "He who has a why to live can bear almost any how.", "Friedrich Nietzsche" },
        { "The happiness of your life depends upon the quality of your thoughts.", "Marcus Aurelius" },
        { "What man actually needs is not a tensionless state but rather the striving and struggling for a worthwhile goal, a freely chosen task.", "Viktor Frankl" },
        { "To be even-minded is the greatest virtue.", "Heraclitus" },
        { "Freedom is the only worthy goal in life. It is won by disregarding things that lie beyond our control.", "Epictetus" },
        { "Wealth consists not in having great possessions, but in having few wants.", "Epictetus" },
        { "Sometimes in life, we need a few bad days in order to keep the good ones in perspective.", "Colleen Hoover" },
        { "It’s not what happens to you, but how you react to it that matters.", "Epictetus" },
        { "To be calm is the highest achievement of the self.", "Zen Proverb" },
        { "If it is not right, do not do it; if it is not true, do not say it.", "Marcus Aurelius" },
        { "Life is very short and anxious for those who forget the past, neglect the present, and fear the future.", "Seneca" },
        { "Begin at once to live, and count each separate day as a separate life.", "Seneca" },
        { "The best revenge is not to be like your enemy.", "Marcus Aurelius" },
        { "It is the power of the mind to be unconquerable.", "Seneca" },
        { "We are more often frightened than hurt; and we suffer more in imagination than in reality.", "Seneca" },
        { "No man is free who is not master of himself.", "Epictetus" },
        { "Make the mind tougher by exposing it to adversity.", "Robert Greene" },
        { "Be tolerant with others and strict with yourself.", "Marcus Aurelius" },
        { "He who lives in harmony with himself lives in harmony with the universe.", "Marcus Aurelius" },
        { "If you want to improve, be content to be thought foolish and stupid.", "Epictetus" },
        { "The things you think about determine the quality of your mind.", "Marcus Aurelius" },
        { "A gem cannot be polished without friction, nor a man perfected without trials.", "Seneca" },
        { "To wish to be well is a part of becoming well.", "Seneca" },
        { "Don’t explain your philosophy. Embody it.", "Epictetus" },
        { "While we wait for life, life passes.", "Seneca" },
        { "We have two ears and one mouth, so we should listen more than we say.", "Zeno of Citium" },
        { "Attach yourself to what is spiritually superior, regardless of what other people think or do. Hold to your true aspirations no matter what is going on around you.", "Epictetus" },
        { "It is impossible for a man to learn what he thinks he already knows.", "Epictetus" },
        { "The soul becomes dyed with the color of its thoughts.", "Marcus Aurelius" },
        { "When you arise in the morning, think of what a precious privilege it is to be alive - to breathe, to think, to enjoy, to love.", "Marcus Aurelius" },
        { "Look back over the past, with its changing empires that rose and fell, and you can foresee the future too.", "Marcus Aurelius" },
        { "You could leave life right now. Let that determine what you do and say and think.", "Marcus Aurelius" },
        { "Let us prepare our minds as if we’d come to the very end of life. Let us postpone nothing. Let us balance life’s books each day. The one who puts the finishing touches on their life each day is never short of time.", "Seneca" },
        { "Wherever there is a human being, there is an opportunity for a kindness.", "Seneca" },
        { "If you really want to escape the things that harass you, what you’re needing is not to be in a different place but to be a different person.", "Seneca" },
        { "Remember, no human condition is ever permanent: then you will not be overjoyed in good fortune nor too scornful in misfortune.", "Socrates" },
        { "There is only one way to happiness and that is to cease worrying about things which are beyond the power of our will.", "Epictetus" },
        { "Difficulty shows what men are.", "Epictetus" },
        { "He who indulges in empty fears earns himself real fears.", "Seneca" },
        { "The nearer a man comes to a calm mind, the closer he is to strength.", "Marcus Aurelius" },
        { "How much more grievous are the consequences of anger than the causes of it.", "Marcus Aurelius" },
        { "The best answer to anger is silence.", "Marcus Aurelius" },
        { "Whoever is calm and sensible is insane!", "Seneca" },
        { "We must undergo a hard winter training and not rush into things for which we haven’t prepared.", "Epictetus" },
        { "He suffers more than necessary, who suffers before it is necessary.", "Seneca" },
        { "Wealth is the slave of a wise man. The master of a fool.", "Seneca" },
        { "No great thing is created suddenly.", "Epictetus" },
        { "Only the educated are free.", "Epictetus" },
        { "The greater the difficulty, the more glory in surmounting it.", "Epicurus" },
        { "It is better to be hated for what you are than to be loved for what you are not.", "André Gide" },
        { "You will find no one willing to share out his money; but to how many does each of us divide his life!", "Seneca" },
        { "He who is brave is free.", "Seneca" },
        { "The bravest sight in the world is to see a great man struggling against adversity.", "Seneca" },
        { "There is nothing noble in being superior to your fellow man; true nobility is being superior to your former self.", "Ernest Hemingway" },
        { "External things are not the problem. It’s your assessment of them. Which you can erase right now.", "Marcus Aurelius" },
        { "You could leave life right now. Let that determine what you do and say and think.", "Marcus Aurelius" },
        { "You have power over your mind - not outside events. Realize this, and you will find strength.", "Marcus Aurelius" },
        { "The impediment to action advances action. What stands in the way becomes the way.", "Marcus Aurelius" },
        // ... Continue with 200 thoughts in the same format ...
    };
    void displayRandomStoicThought();
};
#endif // MAINWINDOW_H
