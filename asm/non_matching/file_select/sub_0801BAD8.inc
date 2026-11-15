	THUMB_FUNC_START sub_0801BAD8
sub_0801BAD8: @ 0x0801BAD8
	push {r4,r5,lr}
	add r5, r0, #0
	ldr r0, [r5, #124]
	cmp r0, #0
	bne _0801BB04
	ldr r4, _0801BB10  @ =gUnknown_03006A30
	bl 0x0800099C
	ldr r1, _0801BB14  @ =gUnknown_03006C80
	ldrb r1, [r1]
	bl __umodsi3
	lsl r1, r0, #3
	add r1, r1, r0
	lsl r1, r1, #4
	add r4, r4, #40
	add r1, r1, r4
	ldr r1, [r1]
	ldrh r0, [r1, #50]
	strh r0, [r5, #50]
	ldrh r0, [r1, #54]
	strh r0, [r5, #54]
_0801BB04:
	mov r0, #1
	strb r0, [r5, #20]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801BB10:
	.4byte gUnknown_03006A30
_0801BB14:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_0801BAD8

