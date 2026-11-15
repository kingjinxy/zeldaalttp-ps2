	THUMB_FUNC_START sub_0805E8C0
sub_0805E8C0: @ 0x0805E8C0
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	add r0, r7, #4
	ldr r1, _0805E904  @ =gUnknown_03006C80
	ldr r2, [r7]
	ldrb r3, [r2, #11]
	add r2, r3, #0
	lsl r3, r2, #3
	add r1, r1, r3
	add r2, r1, #0
	add r1, r1, #45
	ldr r2, _0805E908  @ =gUnknown_08429319
	ldr r3, _0805E90C  @ =gUnknown_02016D60
	ldrb r4, [r3, #8]
	add r2, r2, r4
	ldrb r1, [r1]
	ldrb r2, [r2]
	add r3, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	add r0, r7, #4
	ldrb r1, [r0]
	cmp r1, #0
	bne _0805E910
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
	b _0805E98E
_0805E904:
	.4byte gUnknown_03006C80
_0805E908:
	.4byte gUnknown_08429319
_0805E90C:
	.4byte gUnknown_02016D60
_0805E910:
	add r0, r7, #4
	add r2, r7, #4
	ldrb r1, [r2]
	ldr r2, _0805E960  @ =gUnknown_0842931E
	ldr r3, _0805E964  @ =gUnknown_02016D60
	ldrb r4, [r3, #8]
	add r2, r2, r4
	ldrb r3, [r2]
	asr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldr r1, _0805E968  @ =gUnknown_08429323
	ldr r2, _0805E964  @ =gUnknown_02016D60
	ldrb r3, [r2, #8]
	add r1, r1, r3
	add r2, r0, #0
	add r0, r0, #33
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	add r1, r7, #4
	ldrb r2, [r1]
	cmp r2, #3
	bne _0805E970
	ldr r1, _0805E96C  @ =gUnknown_08429328
	ldr r2, _0805E964  @ =gUnknown_02016D60
	ldrb r3, [r2, #8]
	add r2, r3, #4
	add r3, r1, r2
	ldrb r1, [r3]
	b _0805E97A
	.byte 0x00
	.byte 0x00
_0805E960:
	.4byte gUnknown_0842931E
_0805E964:
	.4byte gUnknown_02016D60
_0805E968:
	.4byte gUnknown_08429323
_0805E96C:
	.4byte gUnknown_08429328
_0805E970:
	ldr r2, _0805E998  @ =gUnknown_08429328
	add r3, r7, #4
	ldrb r4, [r3]
	add r2, r2, r4
	ldrb r1, [r2]
_0805E97A:
	mov r2, #15
	and r1, r1, r2
	ldrb r2, [r0, #30]
	mov r3, #240
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #30]
_0805E98E:
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0805E998:
	.4byte gUnknown_08429328
	THUMB_FUNC_END sub_0805E8C0

