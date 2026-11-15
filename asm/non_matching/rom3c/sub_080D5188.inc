	THUMB_FUNC_START sub_080D5188
sub_080D5188: @ 0x080D5188
	push {r4,r5,lr}
	mov r5, #0
	mov r4, #3
	ldr r1, _080D5268  @ =gRam
	ldr r2, _080D526C  @ =0x000009DA
	add r0, r1, r2
	ldr r3, _080D5270  @ =gUnknown_081750A8
	ldrh r0, [r0]
	add r2, r1, #0
	ldrb r1, [r3, #3]
	cmp r0, r1
	beq _080D51B0
	add r1, r0, #0
_080D51A2:
	sub r4, r4, #1
	cmp r4, #0
	blt _080D51C4
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r1, r0
	bne _080D51A2
_080D51B0:
	cmp r4, #0
	blt _080D51C4
	ldr r3, _080D5274  @ =0x000016B3
	add r0, r2, r3
	ldrb r0, [r0]
	asr r0, r0, r4
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080D51C6
_080D51C4:
	mov r5, #1
_080D51C6:
	cmp r5, #0
	bne _080D5262
	mov r1, #15
	ldr r3, _080D5278  @ =0x00000FB1
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #9
	bne _080D51E0
	add r3, r3, #80
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #98
	beq _080D5262
_080D51E0:
	sub r1, r1, #1
	cmp r1, #0
	blt _080D5200
	ldr r3, _080D527C  @ =0x00000FA2
	add r0, r2, r3
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #9
	bne _080D51E0
	add r3, r3, #80
	add r0, r2, r3
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #98
	bne _080D51E0
	mov r5, #1
_080D5200:
	cmp r5, #0
	bne _080D5262
	mov r0, #98
	mov r1, #0
	mov r2, #14
	bl sub_080C9AAC
	ldr r3, _080D5268  @ =gRam
	ldr r5, _080D5280  @ =0x00000EE2
	add r1, r3, r5
	add r1, r0, r1
	mov r2, #126
	strb r2, [r1]
	ldr r2, _080D5284  @ =0x00000F02
	add r1, r3, r2
	add r1, r0, r1
	ldr r5, _080D5288  @ =0x000016C5
	add r2, r3, r5
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _080D528C  @ =0x00000ED2
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #110
	strb r2, [r1]
	ldr r5, _080D5290  @ =0x00000EF2
	add r1, r3, r5
	add r1, r0, r1
	ldr r5, _080D5294  @ =0x000015F5
	add r2, r3, r5
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _080D5298  @ =0x00001052
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #5
	strb r2, [r1]
	ldr r5, _080D529C  @ =0x000010F2
	add r1, r3, r5
	add r1, r0, r1
	mov r5, #161
	lsl r5, r5, #4
	add r2, r3, r5
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r1, _080D52A0  @ =0x00000F62
	add r3, r3, r1
	add r0, r0, r3
	strb r4, [r0]
_080D5262:
	pop {r4,r5}
	pop {r0}
	bx r0
_080D5268:
	.4byte gRam
_080D526C:
	.4byte 0x000009DA
_080D5270:
	.4byte gUnknown_081750A8
_080D5274:
	.4byte 0x000016B3
_080D5278:
	.4byte 0x00000FB1
_080D527C:
	.4byte 0x00000FA2
_080D5280:
	.4byte 0x00000EE2
_080D5284:
	.4byte 0x00000F02
_080D5288:
	.4byte 0x000016C5
_080D528C:
	.4byte 0x00000ED2
_080D5290:
	.4byte 0x00000EF2
_080D5294:
	.4byte 0x000015F5
_080D5298:
	.4byte 0x00001052
_080D529C:
	.4byte 0x000010F2
_080D52A0:
	.4byte 0x00000F62
	THUMB_FUNC_END sub_080D5188

