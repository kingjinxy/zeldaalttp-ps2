	THUMB_FUNC_START sub_08105230
sub_08105230: @ 0x08105230
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	ldr r6, _081052B8  @ =gRam
	ldr r1, _081052BC  @ =0x00000F82
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08105248
	b _081053A4
_08105248:
	add r0, r4, #0
	bl sub_08105504
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810525C
	b _08105428
_0810525C:
	ldr r2, _081052C0  @ =0x00001072
	add r0, r6, r2
	add r3, r4, r0
	ldrb r1, [r3]
	cmp r1, #0
	beq _08105356
	ldr r2, _081052C4  @ =0x00000F62
	add r0, r6, r2
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #0
	beq _08105356
	cmp r1, #15
	bne _08105356
	mov r0, #6
	strb r0, [r3]
	ldr r3, _081052C8  @ =0x00001142
	add r1, r6, r3
	add r1, r4, r1
	ldr r3, _081052CC  @ =0x00000F72
	add r0, r6, r3
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	cmp r0, #0
	bne _081052A2
	ldr r1, _081052D0  @ =0x00001022
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #17
	strb r1, [r0]
_081052A2:
	ldr r2, _081052D4  @ =0x00000F22
	add r0, r6, r2
	add r1, r4, r0
	ldrb r2, [r1]
	mov r0, #128
	and r0, r0, r2
	cmp r0, #0
	bne _081052D8
	add r0, r2, #4
	b _081052DC
	.byte 0x00
	.byte 0x00
_081052B8:
	.4byte gRam
_081052BC:
	.4byte 0x00000F82
_081052C0:
	.4byte 0x00001072
_081052C4:
	.4byte 0x00000F62
_081052C8:
	.4byte 0x00001142
_081052CC:
	.4byte 0x00000F72
_081052D0:
	.4byte 0x00001022
_081052D4:
	.4byte 0x00000F22
_081052D8:
	add r0, r2, #0
	add r0, r0, #252
_081052DC:
	strb r0, [r1]
	ldr r0, _081052F4  @ =gRam
	ldr r3, _081052F8  @ =0x00000F12
	add r0, r0, r3
	add r2, r5, r0
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _081052FC
	add r0, r1, #4
	b _08105300
_081052F4:
	.4byte gRam
_081052F8:
	.4byte 0x00000F12
_081052FC:
	add r0, r1, #0
	add r0, r0, #252
_08105300:
	strb r0, [r2]
	mov r0, #199
	add r1, r5, #0
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	blt _08105356
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r2, _08105384  @ =gRam
	ldr r1, _08105388  @ =0x00000F82
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	ldr r3, _0810538C  @ =0x00001022
	add r0, r2, r3
	add r0, r4, r0
	strb r1, [r0]
	ldr r0, _08105390  @ =0x00000F22
	add r1, r2, r0
	add r1, r4, r1
	add r3, r3, #240
	add r0, r2, r3
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _08105394  @ =0x00000F12
	add r1, r2, r0
	add r1, r4, r1
	sub r3, r3, #16
	add r0, r2, r3
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _08105398  @ =0x00000E75
	add r2, r2, r0
	add r2, r4, r2
	mov r0, #64
	strb r0, [r2]
_08105356:
	add r0, r5, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _08105428
	add r0, r5, #0
	bl sub_080C5044
	ldr r1, _0810539C  @ =gUnknown_0817BE80
	ldr r0, _08105384  @ =gRam
	ldr r2, _081053A0  @ =0x00000F52
	add r0, r0, r2
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
	b _08105428
	.byte 0x00
	.byte 0x00
_08105384:
	.4byte gRam
_08105388:
	.4byte 0x00000F82
_0810538C:
	.4byte 0x00001022
_08105390:
	.4byte 0x00000F22
_08105394:
	.4byte 0x00000F12
_08105398:
	.4byte 0x00000E75
_0810539C:
	.4byte gUnknown_0817BE80
_081053A0:
	.4byte 0x00000F52
_081053A4:
	add r0, r4, #0
	bl sub_080C6240
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r7, #0
	bne _08105428
	add r0, r4, #0
	bl sub_080C5044
	add r0, r4, #0
	bl sub_080C99DC
	ldr r3, _08105430  @ =0x00001152
	add r0, r6, r3
	add r2, r4, r0
	ldrb r0, [r2]
	sub r0, r0, #2
	strb r0, [r2]
	ldr r1, _08105434  @ =0x00001142
	add r0, r6, r1
	add r3, r4, r0
	ldrb r1, [r3]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _081053E6
	mov r0, #16
	strb r0, [r2]
	strb r7, [r3]
_081053E6:
	add r0, r4, #0
	bl sub_080CA2A4
	cmp r0, #0
	beq _081053F8
	add r0, r4, #0
	mov r1, #13
	bl sub_080CF0AC
_081053F8:
	ldr r2, _08105438  @ =0x000010A2
	add r0, r6, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #2
	bls _08105428
	ldr r3, _0810543C  @ =0x00000FA2
	add r0, r6, r3
	add r0, r5, r0
	mov r1, #6
	strb r1, [r0]
	ldr r1, _08105440  @ =0x00000FC2
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #10
	strb r1, [r0]
	ldr r2, _08105444  @ =0x000011B2
	add r0, r6, r2
	add r0, r5, r0
	strb r7, [r0]
	add r0, r5, #0
	mov r1, #114
	bl sub_080CF0AC
_08105428:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08105430:
	.4byte 0x00001152
_08105434:
	.4byte 0x00001142
_08105438:
	.4byte 0x000010A2
_0810543C:
	.4byte 0x00000FA2
_08105440:
	.4byte 0x00000FC2
_08105444:
	.4byte 0x000011B2
	THUMB_FUNC_END sub_08105230

