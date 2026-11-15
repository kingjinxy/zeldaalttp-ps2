	.syntax unified
	THUMB_FUNC_START sub_08004554
sub_08004554: @ 0X08004554
	ldrb r3, [r1, #27]
	movs r4, #16
	tst r3, r4
	bne.n _08004590
	ldrb r3, [r1, #13]
	movs r4, #43
	strb r3, [r0, r4]
	ldrh r2, [r1, #54]
	ldr r4, [pc, #300]
	tst r2, r4
	beq.n _08004590
	ldrb r2, [r1, #18]
	cmp r2, #255
	beq.n _0800457A
	cmp r2, #4
	beq.n _0800457A
	ldr r2, [pc, #288]
	str r2, [r0, #12]
	b.n _0800457E
_0800457A:
	ldr r2, [pc, #268]
	str r2, [r0, #12]
_0800457E:
	movs r2, #128
	tst r3, r2
	beq.n _08004590
	movs r3, #42
	.syntax unified
	.thumb
