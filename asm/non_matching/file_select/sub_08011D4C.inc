	THUMB_FUNC_START sub_08011D4C
sub_08011D4C: @ 0x08011D4C
	push {lr}
	add r2, r0, #0
	ldrb r0, [r2, #20]
	cmp r0, #0
	bne _08011DB4
	mov r0, #1
	strb r0, [r2, #20]
	ldrb r1, [r2, #28]
	sub r0, r0, #5
	and r0, r0, r1
	mov r1, #2
	orr r0, r0, r1
	strb r0, [r2, #28]
	ldr r0, _08011D80  @ =gGameLanguage
	ldrb r0, [r0]
	cmp r0, #0
	bne _08011D84
	add r1, r2, #0
	add r1, r1, #33
	mov r0, #9
	strb r0, [r1]
	ldrb r0, [r2, #11]
	lsl r0, r0, #3
	sub r1, r1, #1
	b _08011DB2
	.byte 0x00
	.byte 0x00
_08011D80:
	.4byte gGameLanguage
_08011D84:
	ldrb r0, [r2, #11]
	cmp r0, #4
	bne _08011D92
	add r0, r2, #0
	bl DeleteThisEntity
	b _08011DD8
_08011D92:
	add r1, r2, #0
	add r1, r1, #33
	mov r0, #10
	strb r0, [r1]
	ldrb r1, [r2, #11]
	mov r0, #13
	mul r0, r1, r0
	ldrh r1, [r2, #50]
	add r0, r0, r1
	strh r0, [r2, #50]
	ldrb r1, [r2, #11]
	lsl r0, r1, #2
	add r0, r0, r1
	lsl r0, r0, #1
	add r1, r2, #0
	add r1, r1, #32
_08011DB2:
	strb r0, [r1]
_08011DB4:
	ldr r1, _08011DDC  @ =gUnknown_02016D60
	ldrb r0, [r1, #3]
	mov r3, #6
	cmp r0, #5
	bne _08011DCC
	add r0, r1, #0
	add r0, r0, #32
	ldrb r0, [r0]
	ldrb r1, [r2, #11]
	cmp r0, r1
	bne _08011DCC
	mov r3, #5
_08011DCC:
	ldrb r1, [r2, #30]
	mov r0, #16
	neg r0, r0
	and r0, r0, r1
	orr r0, r0, r3
	strb r0, [r2, #30]
_08011DD8:
	pop {r0}
	bx r0
_08011DDC:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_08011D4C

