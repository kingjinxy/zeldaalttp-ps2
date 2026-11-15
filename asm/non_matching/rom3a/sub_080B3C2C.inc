	THUMB_FUNC_START sub_080B3C2C
sub_080B3C2C: @ 0x080B3C2C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r2, _080B3D38  @ =gRam
	ldr r1, _080B3D3C  @ =gUnknown_0816F702
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	mov r5, #255
	ldrb r0, [r0]
	ldr r1, _080B3D40  @ =0x00000964
	add r3, r2, r1
	mov r6, #0
	mov r1, #15
	and r1, r1, r0
	mov r7, #150
	lsl r7, r7, #4
	add r4, r2, r7
	strh r1, [r4]
	lsr r0, r0, #4
	add r0, r1, r0
	strh r0, [r3]
	ldr r3, _080B3D44  @ =0x000009DE
	add r0, r2, r3
	ldrh r0, [r0]
	add r0, r0, r1
	and r0, r0, r5
	add r7, r7, #24
	add r1, r2, r7
	strh r0, [r1]
	ldr r1, _080B3D48  @ =0x00000974
	add r0, r2, r1
	strh r6, [r0]
	sub r3, r3, #98
	add r2, r2, r3
	ldrh r0, [r2]
	sub r0, r0, #124
	strh r0, [r2]
	mov r7, #0
	ldrsh r4, [r4, r7]
	cmp r4, #0
	beq _080B3C92
_080B3C84:
	add r1, r0, #0
	add r1, r1, #128
	add r0, r1, #0
	sub r4, r4, #1
	cmp r4, #0
	bne _080B3C84
	strh r1, [r2]
_080B3C92:
	ldr r0, _080B3D4C  @ =gUnknown_02000400
	ldrh r4, [r0]
	ldr r0, _080B3D38  @ =gRam
	mov r9, r0
	ldr r6, _080B3D50  @ =0x0000097C
	add r6, r6, r9
	ldr r1, _080B3D54  @ =gUnknown_0816EFB2
	mov r10, r1
	ldr r3, _080B3D48  @ =0x00000974
	add r3, r3, r9
	mov r8, r3
	lsl r0, r4, #1
	ldr r1, _080B3D58  @ =gUnknown_02000402
	add r2, r0, r1
	mov r7, #4
	mov r12, r7
	add r7, r1, #0
_080B3CB4:
	ldrh r0, [r6]
	strh r0, [r2]
	add r2, r2, #2
	mov r0, r12
	strh r0, [r2]
	add r2, r2, #2
	add r4, r4, #2
	lsl r0, r4, #1
	add r3, r0, r7
	mov r1, r10
	mov r5, #3
_080B3CCA:
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	sub r5, r5, #1
	add r3, r3, #2
	add r2, r2, #2
	add r4, r4, #1
	cmp r5, #0
	bge _080B3CCA
	mov r5, #4
	ldrh r0, [r6]
	add r0, r0, #64
	strh r0, [r2]
	add r2, r2, #2
	mov r1, r12
	strh r1, [r2]
	add r2, r2, #2
	add r4, r4, #2
	lsl r0, r4, #1
	add r3, r0, r7
	ldr r1, _080B3D54  @ =gUnknown_0816EFB2
	add r1, r1, #8
_080B3CF6:
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	add r5, r5, #1
	add r3, r3, #2
	add r2, r2, #2
	add r4, r4, #1
	cmp r5, #7
	ble _080B3CF6
	ldrh r0, [r6]
	sub r0, r0, #128
	strh r0, [r6]
	mov r3, r8
	ldrh r0, [r3]
	add r0, r0, #1
	strh r0, [r3]
	ldr r1, _080B3D40  @ =0x00000964
	add r1, r1, r9
	lsl r0, r0, #16
	asr r0, r0, #16
	mov r3, #0
	ldrsh r1, [r1, r3]
	cmp r0, r1
	blt _080B3CB4
	ldr r0, _080B3D4C  @ =gUnknown_02000400
	strh r4, [r0]
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080B3D38:
	.4byte gRam
_080B3D3C:
	.4byte gUnknown_0816F702
_080B3D40:
	.4byte 0x00000964
_080B3D44:
	.4byte 0x000009DE
_080B3D48:
	.4byte 0x00000974
_080B3D4C:
	.4byte gUnknown_02000400
_080B3D50:
	.4byte 0x0000097C
_080B3D54:
	.4byte gUnknown_0816EFB2
_080B3D58:
	.4byte gUnknown_02000402
	THUMB_FUNC_END sub_080B3C2C

