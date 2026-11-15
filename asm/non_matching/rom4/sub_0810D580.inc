	THUMB_FUNC_START sub_0810D580
sub_0810D580: @ 0x0810D580
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_0810D79C
	ldr r5, _0810D634  @ =gRam
	ldr r1, _0810D638  @ =0x00000F92
	add r0, r5, r1
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #0
	beq _0810D68E
	cmp r0, #13
	beq _0810D68E
	ldr r1, _0810D63C  @ =gUnknown_0817CECB
	sub r0, r0, #1
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r2, _0810D640  @ =0x00001809
	add r0, r5, r2
	strb r1, [r0]
	ldr r3, _0810D644  @ =0x00000ED2
	add r0, r5, r3
	add r0, r4, r0
	ldrb r2, [r0]
	ldr r1, _0810D648  @ =0x00000EF2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	lsl r1, r1, #8
	ldr r3, _0810D64C  @ =gUnknown_0817CED7
	ldrb r0, [r6]
	sub r0, r0, #1
	add r0, r0, r3
	orr r2, r2, r1
	ldrb r0, [r0]
	add r2, r2, r0
	mov r3, #182
	lsl r3, r3, #5
	add r0, r5, r3
	strh r2, [r0]
	ldr r1, _0810D650  @ =0x00000EE2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r2, _0810D654  @ =0x00000F02
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	add r3, r3, #4
	add r0, r5, r3
	strh r1, [r0]
	ldr r1, _0810D658  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0810D68E
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #13
	bne _0810D674
	add r2, r2, #240
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #6
	beq _0810D664
	mov r3, #188
	lsl r3, r3, #4
	add r1, r5, r3
	mov r0, #1
	strh r0, [r1]
	ldr r1, _0810D65C  @ =0x000009DA
	add r0, r5, r1
	ldrh r1, [r0]
	ldr r0, _0810D660  @ =0x0000010B
	cmp r1, r0
	beq _0810D674
	add r0, r4, #0
	mov r1, #123
	bl sub_080CF140
	b _0810D674
_0810D634:
	.4byte gRam
_0810D638:
	.4byte 0x00000F92
_0810D63C:
	.4byte gUnknown_0817CECB
_0810D640:
	.4byte 0x00001809
_0810D644:
	.4byte 0x00000ED2
_0810D648:
	.4byte 0x00000EF2
_0810D64C:
	.4byte gUnknown_0817CED7
_0810D650:
	.4byte 0x00000EE2
_0810D654:
	.4byte 0x00000F02
_0810D658:
	.4byte 0x00000FC2
_0810D65C:
	.4byte 0x000009DA
_0810D660:
	.4byte 0x0000010B
_0810D664:
	ldr r2, _0810D6B4  @ =0x00000EC7
	add r1, r5, r2
	mov r0, #1
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #64
	bl sub_080CF0AC
_0810D674:
	ldr r0, _0810D6B8  @ =gRam
	ldr r3, _0810D6BC  @ =0x00000FC2
	add r1, r0, r3
	add r1, r4, r1
	ldr r2, _0810D6C0  @ =gUnknown_0817CEBF
	sub r3, r3, #48
	add r0, r0, r3
	add r0, r4, r0
	ldrb r0, [r0]
	sub r0, r0, #2
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
_0810D68E:
	add r0, r4, #0
	bl sub_0810D6CC
	ldr r1, _0810D6B8  @ =gRam
	ldr r2, _0810D6C4  @ =0x000010D2
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0810D6AC
	ldr r3, _0810D6C8  @ =0x00000F92
	add r0, r1, r3
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
_0810D6AC:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810D6B4:
	.4byte 0x00000EC7
_0810D6B8:
	.4byte gRam
_0810D6BC:
	.4byte 0x00000FC2
_0810D6C0:
	.4byte gUnknown_0817CEBF
_0810D6C4:
	.4byte 0x000010D2
_0810D6C8:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_0810D580

