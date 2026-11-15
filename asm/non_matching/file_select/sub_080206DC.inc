	THUMB_FUNC_START sub_080206DC
sub_080206DC: @ 0x080206DC
	push {lr}
	add r3, r0, #0
	ldr r1, [r3, #76]
	ldrb r0, [r1, #10]
	cmp r0, #2
	bhi _080206FA
	ldr r2, _08020708  @ =gUnknown_03006A30
	add r1, r0, #0
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r2, r2, #40
	add r0, r0, r2
	ldr r0, [r0]
	str r0, [r3, #100]
_080206FA:
	ldr r1, _0802070C  @ =gUnknown_0813B67C
	add r0, r3, #0
	bl 0x080098A0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08020708:
	.4byte gUnknown_03006A30
_0802070C:
	.4byte gUnknown_0813B67C
	THUMB_FUNC_END sub_080206DC

