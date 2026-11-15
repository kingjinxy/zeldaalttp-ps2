	THUMB_FUNC_START sub_0805D0C8
sub_0805D0C8: @ 0x0805D0C8
	push {r4,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl sub_0803CC20
	ldr r0, [r7]
	bl 0x08004168
	add r1, r7, #0
	add r1, r1, #8
	strb r0, [r1]
	ldrb r0, [r1]
	cmp r0, #0
	bne _0805D0EA
	b _0805D1E0
_0805D0EA:
	add r0, r7, #0
	add r0, r0, #8
	ldrb r1, [r0]
	mov r2, #1
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0805D124
	ldr r0, _0805D308  @ =gUnknown_03006A30
	ldr r2, [r0, #40]
	add r1, r2, #0
	add r0, r2, #0
	add r0, r0, #65
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #184
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r1, _0805D308  @ =gUnknown_03006A30
	add r0, r1, #0
	bl 0x080012A0
_0805D124:
	add r0, r7, #0
	add r0, r0, #8
	ldrb r1, [r0]
	mov r2, #2
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0805D160
	ldr r1, _0805D308  @ =gUnknown_03006A30
	add r0, r1, #0
	add r1, r1, #184
	ldr r0, [r1]
	add r1, r0, #0
	add r0, r0, #65
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #184
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r1, _0805D30C  @ =gUnknown_03006AC0
	add r0, r1, #0
	bl 0x080012A0
_0805D160:
	add r0, r7, #0
	add r0, r0, #8
	ldrb r1, [r0]
	mov r2, #4
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0805D1A0
	ldr r1, _0805D308  @ =gUnknown_03006A30
	add r0, r1, #0
	mov r0, #164
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r0, [r1]
	add r1, r0, #0
	add r0, r0, #65
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #184
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r1, _0805D310  @ =gUnknown_03006B50
	add r0, r1, #0
	bl 0x080012A0
_0805D1A0:
	add r0, r7, #0
	add r0, r0, #8
	ldrb r1, [r0]
	mov r2, #8
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0805D1E0
	ldr r1, _0805D308  @ =gUnknown_03006A30
	add r0, r1, #0
	mov r0, #236
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r0, [r1]
	add r1, r0, #0
	add r0, r0, #65
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #184
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r1, _0805D314  @ =gUnknown_03006BE0
	add r0, r1, #0
	bl 0x080012A0
_0805D1E0:
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	beq _0805D204
	b _0805D336
_0805D204:
	ldr r0, [r7]
	bl 0x08003B64
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0805D214
	b _0805D336
_0805D214:
	ldr r0, [r7]
	ldrh r1, [r0, #58]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0, #58]
	ldr r0, [r7]
	bl 0x080093A4
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _0805D230
	b _0805D31C
_0805D230:
	mov r0, #15
	mov r1, #4
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _0805D24A
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0803D3D0
_0805D24A:
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, _0805D318  @ =gUnknown_08141298
	ldr r4, [r7]
	add r3, r4, #0
	add r4, r4, #43
	ldrb r3, [r4]
	lsr r4, r3, #2
	add r3, r4, #0
	lsl r4, r3, #24
	lsr r3, r4, #24
	add r4, r3, #0
	lsl r3, r4, #1
	add r2, r2, r3
	ldrh r1, [r1, #50]
	ldrh r2, [r2]
	add r1, r1, r2
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, _0805D318  @ =gUnknown_08141298
	ldr r4, [r7]
	add r3, r4, #0
	add r4, r4, #43
	ldrb r3, [r4]
	lsr r4, r3, #2
	add r3, r4, #0
	lsl r4, r3, #24
	lsr r3, r4, #24
	add r4, r3, #1
	add r3, r4, #0
	lsl r4, r3, #1
	add r2, r2, r4
	ldrh r1, [r1, #54]
	ldrh r2, [r2]
	add r1, r1, r2
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7]
	bl sub_0805D3DC
	ldr r1, [r7]
	add r0, r1, #0
	add r2, r1, #0
	add r2, r2, #124
	ldrh r1, [r2]
	ldr r2, [r7]
	add r0, r2, #0
	add r3, r2, #0
	add r3, r3, #80
	ldrh r2, [r3]
	mov r0, #0
	bl sub_08008F48
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #60
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	b _0805D336
	.byte 0x00
	.byte 0x00
_0805D308:
	.4byte gUnknown_03006A30
_0805D30C:
	.4byte gUnknown_03006AC0
_0805D310:
	.4byte gUnknown_03006B50
_0805D314:
	.4byte gUnknown_03006BE0
_0805D318:
	.4byte gUnknown_08141298
_0805D31C:
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	bl sub_0805D3DC
_0805D336:
	add sp, sp, #12
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805D0C8

	.byte 0x00
	.byte 0x00
