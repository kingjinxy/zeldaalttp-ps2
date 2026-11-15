	THUMB_FUNC_START sub_08100908
sub_08100908: @ 0x08100908
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r1, #0
	ldr r5, _081009A8  @ =gRam
	ldr r0, _081009AC  @ =0x000009DA
	add r6, r5, r0
	ldrh r0, [r6]
	cmp r0, #236
	bne _0810091E
	mov r1, #1
_0810091E:
	cmp r1, #0
	bne _08100928
	add r0, r4, #0
	bl sub_08100DB4
_08100928:
	ldr r1, _081009B0  @ =0x00000F92
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #9
	strb r1, [r0]
	ldr r1, _081009B4  @ =0x00000FE2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r2, [r0]
	cmp r2, #0
	bne _08100972
	ldr r0, _081009B8  @ =0x00000F82
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _081009BC  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #255
	strb r1, [r0]
	ldr r1, _081009C0  @ =0x00001172
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
	mov r1, #0
	ldrh r0, [r6]
	cmp r0, #236
	bne _08100966
	mov r1, #1
_08100966:
	cmp r1, #0
	beq _08100972
	ldr r0, _081009C4  @ =gUnknown_02010990
	strb r2, [r0]
	strb r2, [r0, #1]
	strb r2, [r0, #2]
_08100972:
	ldr r5, _081009A8  @ =gRam
	ldr r1, _081009B4  @ =0x00000FE2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #63
	bhi _08100990
	sub r1, r1, #208
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #248
	strb r1, [r0]
	add r0, r4, #0
	bl Sprite3_MoveVert
_08100990:
	add r0, r4, #0
	bl sub_08100E3C
	ldr r1, _081009C8  @ =0x00001082
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #4
	strb r1, [r0]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081009A8:
	.4byte gRam
_081009AC:
	.4byte 0x000009DA
_081009B0:
	.4byte 0x00000F92
_081009B4:
	.4byte 0x00000FE2
_081009B8:
	.4byte 0x00000F82
_081009BC:
	.4byte 0x00000FC2
_081009C0:
	.4byte 0x00001172
_081009C4:
	.4byte gUnknown_02010990
_081009C8:
	.4byte 0x00001082
	THUMB_FUNC_END sub_08100908

