	THUMB_FUNC_START sub_080929C8
sub_080929C8: @ 0x080929C8
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #136
	bne _08092A34
	ldr r2, _08092A0C  @ =gRam
	ldr r1, _08092A10  @ =0x00000AD2
	add r0, r2, r1
	ldrh r5, [r0]
	lsl r3, r5, #1
	ldr r1, _08092A14  @ =0x000019BC
	add r0, r2, r1
	add r0, r3, r0
	ldr r1, _08092A18  @ =0x0000310B
	strh r1, [r0]
	ldr r1, _08092A1C  @ =0x000019DC
	add r0, r2, r1
	add r0, r3, r0
	ldr r1, _08092A20  @ =0x0000311B
	strh r1, [r0]
	ldr r1, _08092A24  @ =0x000019FC
	add r0, r2, r1
	add r0, r3, r0
	ldr r1, _08092A28  @ =0x0000350B
	strh r1, [r0]
	ldr r0, _08092A2C  @ =0x00001A1C
	add r2, r2, r0
	add r3, r3, r2
	ldr r0, _08092A30  @ =0x0000351B
	strh r0, [r3]
	b _08092AD6
_08092A0C:
	.4byte gRam
_08092A10:
	.4byte 0x00000AD2
_08092A14:
	.4byte 0x000019BC
_08092A18:
	.4byte 0x0000310B
_08092A1C:
	.4byte 0x000019DC
_08092A20:
	.4byte 0x0000311B
_08092A24:
	.4byte 0x000019FC
_08092A28:
	.4byte 0x0000350B
_08092A2C:
	.4byte 0x00001A1C
_08092A30:
	.4byte 0x0000351B
_08092A34:
	ldr r4, _08092AE4  @ =gRam
	ldr r1, _08092AE8  @ =0x0000096C
	add r0, r4, r1
	mov r3, #0
	ldrsh r0, [r0, r3]
	ldr r1, _08092AEC  @ =gUnknown_0200CBA0
	add r0, r0, r1
	ldrb r0, [r0]
	mov r1, #15
	add r5, r1, #0
	and r5, r5, r0
	lsl r0, r5, #1
	ldr r3, _08092AF0  @ =0x0000195C
	add r2, r4, r3
	add r0, r0, r2
	ldrh r0, [r0]
	and r1, r1, r0
	mov r0, #150
	lsl r0, r0, #4
	add r2, r4, r0
	sub r1, r5, r1
	ldr r3, _08092AF4  @ =0x00000AD2
	add r0, r4, r3
	strh r1, [r0]
	ldrh r5, [r0]
	mov r0, #4
	strh r0, [r2]
	mov r0, #123
	mov r1, #0
	bl sub_0812A324
	mov r7, #4
	mov r3, #0
	ldr r0, _08092AF8  @ =0x000019BC
	add r0, r0, r4
	mov r9, r0
	ldr r6, _08092AFC  @ =gUnknown_08164ADA
	ldr r1, _08092B00  @ =0x000019DC
	add r1, r1, r4
	mov r8, r1
	ldr r0, _08092B04  @ =0x000019FC
	add r0, r0, r4
	mov r12, r0
	ldr r1, _08092B08  @ =0x00001A1C
	add r4, r4, r1
_08092A8E:
	lsl r2, r5, #1
	mov r0, r9
	add r1, r2, r0
	lsl r0, r3, #1
	add r0, r0, r6
	ldrh r0, [r0]
	strh r0, [r1]
	mov r0, r8
	add r1, r2, r0
	add r0, r3, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r0, [r0]
	strh r0, [r1]
	mov r0, r12
	add r1, r2, r0
	add r0, r3, #2
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r0, [r0]
	strh r0, [r1]
	add r2, r2, r4
	add r0, r3, #3
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r0, [r0]
	strh r0, [r2]
	sub r7, r7, #1
	add r0, r3, #4
	lsl r0, r0, #16
	lsr r3, r0, #16
	add r0, r5, #1
	lsl r0, r0, #16
	lsr r5, r0, #16
	cmp r7, #0
	bge _08092A8E
_08092AD6:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08092AE4:
	.4byte gRam
_08092AE8:
	.4byte 0x0000096C
_08092AEC:
	.4byte gUnknown_0200CBA0
_08092AF0:
	.4byte 0x0000195C
_08092AF4:
	.4byte 0x00000AD2
_08092AF8:
	.4byte 0x000019BC
_08092AFC:
	.4byte gUnknown_08164ADA
_08092B00:
	.4byte 0x000019DC
_08092B04:
	.4byte 0x000019FC
_08092B08:
	.4byte 0x00001A1C
	THUMB_FUNC_END sub_080929C8

