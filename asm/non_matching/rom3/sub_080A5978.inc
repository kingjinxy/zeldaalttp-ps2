	THUMB_FUNC_START sub_080A5978
sub_080A5978: @ 0x080A5978
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	mov r8, r0
	ldr r0, _080A5B04  @ =gRam
	ldr r1, _080A5B08  @ =0x00000974
	add r7, r0, r1
	ldrh r2, [r7]
	mov r9, r2
	ldr r3, _080A5B0C  @ =0x00001718
	add r1, r0, r3
	ldrb r1, [r1]
	add r5, r0, #0
	cmp r1, #0
	beq _080A599A
	b _080A5AE8
_080A599A:
	ldr r0, _080A5B10  @ =gSword
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A59A4
	b _080A5AE8
_080A59A4:
	ldr r1, _080A5B14  @ =0x000016E8
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080A59B4
	b _080A5AE8
_080A59B4:
	ldr r2, _080A5B18  @ =0x000016EA
	add r1, r5, r2
	ldrb r0, [r1]
	cmp r0, #8
	bls _080A59C0
	b _080A5AE8
_080A59C0:
	add r1, r0, #0
	lsl r1, r1, #1
	strh r1, [r7]
	sub r3, r3, #67
	add r0, r5, r3
	ldrb r0, [r0]
	lsr r0, r0, #1
	ldr r3, _080A5B1C  @ =0x0000097C
	add r2, r5, r3
	strh r0, [r2]
	mov r0, #0
	ldrsh r2, [r2, r0]
	lsl r0, r2, #3
	add r0, r0, r2
	asr r0, r0, #1
	add r1, r1, r0
	lsl r1, r1, #16
	ldr r2, _080A5B20  @ =gUnknown_0816B456
	lsr r6, r1, #17
	lsl r0, r6, #1
	add r0, r0, r2
	ldrh r2, [r0]
	ldr r0, _080A5B24  @ =0x0000FFFF
	cmp r2, r0
	beq _080A5AE8
	ldr r1, _080A5B28  @ =0x0000CFFF
	and r1, r1, r2
	ldr r2, _080A5B2C  @ =0x00001723
	add r0, r5, r2
	ldrb r2, [r0]
	ldr r3, _080A5B30  @ =0x00001724
	add r0, r5, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	orr r1, r1, r2
	lsl r1, r1, #16
	lsr r4, r1, #16
	mov r1, r8
	ldrh r0, [r1]
	add r1, r4, #0
	bl sub_080A452C
	ldr r2, _080A5B34  @ =0x000017D6
	add r0, r5, r2
	ldrh r0, [r0]
	cmp r0, #0
	bne _080A5A34
	ldr r1, _080A5B38  @ =0x0000F1FF
	and r1, r1, r4
	mov r3, #192
	lsl r3, r3, #3
	add r0, r3, #0
	orr r1, r1, r0
	mov r2, r8
	ldrh r0, [r2]
	bl sub_080A452C
_080A5A34:
	ldr r0, _080A5B3C  @ =gUnknown_0816B49E
	add r0, r6, r0
	ldr r3, _080A5B40  @ =0x00000961
	add r1, r5, r3
	ldrb r2, [r0]
	ldrb r0, [r1]
	add r0, r2, r0
	ldr r1, _080A5B44  @ =0x00000975
	add r3, r5, r1
	strb r0, [r3]
	sub r1, r1, #21
	add r0, r5, r1
	ldrb r0, [r0]
	add r0, r2, r0
	strb r0, [r7]
	ldr r1, _080A5B48  @ =0x000016F6
	add r0, r5, r1
	strb r2, [r0]
	add r1, r1, #1
	add r0, r5, r1
	strb r2, [r0]
	ldrb r1, [r0]
	cmp r1, #127
	bls _080A5A6C
	mov r2, #255
	lsl r2, r2, #8
	add r0, r2, #0
	orr r1, r1, r0
_080A5A6C:
	ldr r2, _080A5B4C  @ =0x000016C4
	add r0, r5, r2
	ldrh r0, [r0]
	add r0, r1, r0
	ldr r2, _080A5B50  @ =0x00000952
	add r1, r5, r2
	ldrh r1, [r1]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #24
	mov r1, #1
	and r0, r0, r1
	ldr r2, _080A5B54  @ =0x00001892
	add r1, r5, r2
	strh r0, [r1]
	mov r0, r8
	ldrh r1, [r0]
	mov r0, #0
	ldrsb r0, [r7, r0]
	lsl r0, r0, #16
	lsr r4, r0, #16
	mov r0, #0
	ldrsb r0, [r3, r0]
	lsl r0, r0, #16
	lsr r7, r0, #16
	lsr r1, r1, #2
	lsl r1, r1, #3
	mov r2, #170
	lsl r2, r2, #3
	add r0, r5, r2
	add r2, r1, r0
	ldr r0, _080A5B58  @ =gUnknown_03003E68
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A5ADE
	ldr r3, _080A5B5C  @ =0x000001FF
	add r6, r3, #0
	add r0, r4, #0
	and r0, r0, r6
	ldrh r1, [r2, #2]
	ldr r5, _080A5B60  @ =0xFFFFFE00
	add r3, r5, #0
	and r3, r3, r1
	orr r3, r3, r0
	strh r3, [r2, #2]
	strb r7, [r2]
	cmp r4, #240
	bls _080A5ADE
	lsl r0, r3, #23
	lsr r0, r0, #23
	mov r1, #128
	lsl r1, r1, #1
	orr r0, r0, r1
	and r0, r0, r6
	and r3, r3, r5
	orr r3, r3, r0
	strh r3, [r2, #2]
_080A5ADE:
	mov r1, r8
	ldrh r0, [r1]
	add r0, r0, #4
	strh r0, [r1]
	ldr r5, _080A5B04  @ =gRam
_080A5AE8:
	ldr r2, _080A5B1C  @ =0x0000097C
	add r0, r5, r2
	mov r1, #0
	strh r1, [r0]
	ldr r3, _080A5B08  @ =0x00000974
	add r0, r5, r3
	mov r1, r9
	strh r1, [r0]
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080A5B04:
	.4byte gRam
_080A5B08:
	.4byte 0x00000974
_080A5B0C:
	.4byte 0x00001718
_080A5B10:
	.4byte gSword
_080A5B14:
	.4byte 0x000016E8
_080A5B18:
	.4byte 0x000016EA
_080A5B1C:
	.4byte 0x0000097C
_080A5B20:
	.4byte gUnknown_0816B456
_080A5B24:
	.4byte 0x0000FFFF
_080A5B28:
	.4byte 0x0000CFFF
_080A5B2C:
	.4byte 0x00001723
_080A5B30:
	.4byte 0x00001724
_080A5B34:
	.4byte 0x000017D6
_080A5B38:
	.4byte 0x0000F1FF
_080A5B3C:
	.4byte gUnknown_0816B49E
_080A5B40:
	.4byte 0x00000961
_080A5B44:
	.4byte 0x00000975
_080A5B48:
	.4byte 0x000016F6
_080A5B4C:
	.4byte 0x000016C4
_080A5B50:
	.4byte 0x00000952
_080A5B54:
	.4byte 0x00001892
_080A5B58:
	.4byte gUnknown_03003E68
_080A5B5C:
	.4byte 0x000001FF
_080A5B60:
	.4byte 0xFFFFFE00
	THUMB_FUNC_END sub_080A5978

