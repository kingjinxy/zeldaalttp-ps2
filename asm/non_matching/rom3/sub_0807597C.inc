	THUMB_FUNC_START sub_0807597C
sub_0807597C: @ 0x0807597C
	push {r4-r6,lr}
	ldr r0, _08075994  @ =gRam
	ldr r2, _08075998  @ =0x00000B64
	add r1, r0, r2
	ldrh r1, [r1]
	add r6, r0, #0
	cmp r1, #0
	beq _0807599C
	mov r5, #16
	mov r3, #0
	b _080759A0
	.byte 0x00
	.byte 0x00
_08075994:
	.4byte gRam
_08075998:
	.4byte 0x00000B64
_0807599C:
	mov r5, #0
	mov r3, #16
_080759A0:
	ldr r1, _08075A18  @ =0x0000097C
	add r0, r6, r1
	strh r3, [r0]
	ldr r0, _08075A1C  @ =gUnknown_02000400
	ldrh r4, [r0]
	lsl r2, r4, #1
	ldr r3, _08075A20  @ =gUnknown_02000402
	add r1, r2, r3
	ldr r3, _08075A24  @ =0x00003DA0
	add r0, r3, #0
	strh r0, [r1]
	ldr r0, _08075A28  @ =gUnknown_02000404
	add r1, r2, r0
	mov r0, #32
	strh r0, [r1]
	mov r3, #16
	lsl r0, r5, #1
	ldr r5, _08075A2C  @ =gUnknown_0200B140
	add r1, r0, r5
	ldr r0, _08075A30  @ =gUnknown_02000406
	add r2, r2, r0
_080759CA:
	ldrh r0, [r1]
	strh r0, [r2]
	add r2, r2, #2
	add r4, r4, #1
	add r1, r1, #2
	sub r3, r3, #1
	cmp r3, #0
	bne _080759CA
	ldr r1, _08075A18  @ =0x0000097C
	add r0, r6, r1
	mov r2, #0
	ldrsh r5, [r0, r2]
	mov r3, #16
	lsl r0, r5, #1
	ldr r5, _08075A2C  @ =gUnknown_0200B140
	add r2, r0, r5
	lsl r0, r4, #1
	ldr r5, _08075A30  @ =gUnknown_02000406
	add r1, r0, r5
_080759F0:
	ldrh r0, [r2]
	strh r0, [r1]
	add r1, r1, #2
	add r4, r4, #1
	add r2, r2, #2
	sub r3, r3, #1
	cmp r3, #0
	bne _080759F0
	lsl r0, r4, #1
	ldr r1, _08075A30  @ =gUnknown_02000406
	add r0, r0, r1
	ldr r2, _08075A34  @ =0x0000FFFF
	add r1, r2, #0
	strh r1, [r0]
	ldr r1, _08075A1C  @ =gUnknown_02000400
	add r0, r4, #2
	strh r0, [r1]
	pop {r4-r6}
	pop {r0}
	bx r0
_08075A18:
	.4byte 0x0000097C
_08075A1C:
	.4byte gUnknown_02000400
_08075A20:
	.4byte gUnknown_02000402
_08075A24:
	.4byte 0x00003DA0
_08075A28:
	.4byte gUnknown_02000404
_08075A2C:
	.4byte gUnknown_0200B140
_08075A30:
	.4byte gUnknown_02000406
_08075A34:
	.4byte 0x0000FFFF
	THUMB_FUNC_END sub_0807597C

