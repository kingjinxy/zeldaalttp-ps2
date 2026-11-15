	THUMB_FUNC_START sub_080351E0
sub_080351E0: @ 0x080351E0
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r0, r4, #0
	bl sub_0803CC20
	mov r0, #50
	ldrsh r1, [r4, r0]
	mov r0, #64
	neg r0, r0
	cmp r1, r0
	bge _0803521C
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	ldr r0, _08035224  @ =gUnknown_03006A30
	ldr r0, [r0, #40]
	add r0, r0, #42
	mov r1, #6
	strb r1, [r0]
	mov r0, #0
	mov r1, #16
	mov r2, #0
	bl sub_08063D28
	ldr r1, _08035228  @ =gUnknown_02016D60
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_0803521C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08035224:
	.4byte gUnknown_03006A30
_08035228:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_080351E0

