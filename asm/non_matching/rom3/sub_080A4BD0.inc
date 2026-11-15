	THUMB_FUNC_START sub_080A4BD0
sub_080A4BD0: @ 0x080A4BD0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r3, _080A4BFC  @ =gRam
	ldr r1, _080A4C00  @ =0x00001792
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r0, r0, #16
	lsr r6, r0, #16
	cmp r6, #0
	beq _080A4C04
	add r0, r6, #0
	bl sub_080A5B64
	b _080A4FAC
_080A4BFC:
	.4byte gRam
_080A4C00:
	.4byte 0x00001792
_080A4C04:
	ldr r2, _080A4CB8  @ =0x00001718
	add r0, r3, r2
	ldrb r1, [r0]
	add r0, r1, #0
	sub r0, r0, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #2
	bls _080A4C72
	add r0, r1, #0
	cmp r0, #3
	beq _080A4C72
	cmp r0, #30
	beq _080A4C72
	ldr r1, _080A4CBC  @ =0x00001791
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A4C72
	ldr r2, _080A4CC0  @ =0x00001885
	add r0, r3, r2
	sub r2, r2, #148
	add r1, r3, r2
	ldrb r2, [r0]
	ldrb r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	bne _080A4C72
	ldr r1, _080A4CC4  @ =0x0000178A
	add r0, r3, r1
	ldrb r2, [r0]
	mov r0, #64
	and r0, r0, r2
	cmp r0, #0
	beq _080A4C4C
	b _080A4FAC
_080A4C4C:
	add r1, r1, #130
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #61
	and r0, r0, r1
	cmp r0, #0
	bne _080A4C82
	mov r0, #147
	and r0, r0, r2
	cmp r0, #0
	bne _080A4C82
	ldr r2, _080A4CC8  @ =0x000016E8
	add r0, r3, r2
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080A4C72
	b _080A4FAC
_080A4C72:
	ldr r0, _080A4CCC  @ =gSword
	ldrb r0, [r0]
	add r0, r0, #1
	mov r1, #254
	and r0, r0, r1
	cmp r0, #0
	bne _080A4C82
	b _080A4FAC
_080A4C82:
	bl sub_080A58CC
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _080A4C90
	b _080A4FAC
_080A4C90:
	ldr r1, _080A4CD0  @ =gRam
	ldr r2, _080A4CD4  @ =0x00000964
	add r0, r1, r2
	ldrh r0, [r0]
	mov r9, r0
	ldr r2, _080A4CD8  @ =0x000016C9
	add r0, r1, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	add r7, r1, #0
	cmp r0, #0
	bge _080A4CE0
	ldr r1, _080A4CDC  @ =0x000016C8
	add r0, r7, r1
	ldrb r2, [r0]
	cmp r2, #239
	bls _080A4CE6
	mov r2, #0
	b _080A4CE6
_080A4CB8:
	.4byte 0x00001718
_080A4CBC:
	.4byte 0x00001791
_080A4CC0:
	.4byte 0x00001885
_080A4CC4:
	.4byte 0x0000178A
_080A4CC8:
	.4byte 0x000016E8
_080A4CCC:
	.4byte gSword
_080A4CD0:
	.4byte gRam
_080A4CD4:
	.4byte 0x00000964
_080A4CD8:
	.4byte 0x000016C9
_080A4CDC:
	.4byte 0x000016C8
_080A4CE0:
	ldr r2, _080A4D30  @ =0x000016C8
	add r0, r7, r2
	ldrb r2, [r0]
_080A4CE6:
	ldr r0, _080A4D34  @ =0x00000961
	add r1, r7, r0
	ldr r0, _080A4D38  @ =gUnknown_0816A0EC
	add r0, r0, r9
	ldrb r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	sub r0, r0, r2
	ldr r2, _080A4D3C  @ =0x00000975
	add r1, r7, r2
	strb r0, [r1]
	mov r0, #150
	lsl r0, r0, #4
	add r1, r7, r0
	ldr r0, _080A4D40  @ =gUnknown_0816A2F1
	add r0, r0, r9
	ldrb r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	sub r2, r2, #1
	add r1, r7, r2
	strb r0, [r1]
	sub r2, r2, #4
	add r1, r7, r2
	strb r0, [r1]
	ldr r1, _080A4D44  @ =0x0000178A
	add r0, r7, r1
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _080A4D48
	mov r0, #5
	and r0, r0, r1
	cmp r0, #0
	bne _080A4D74
	b _080A4D5C
_080A4D30:
	.4byte 0x000016C8
_080A4D34:
	.4byte 0x00000961
_080A4D38:
	.4byte gUnknown_0816A0EC
_080A4D3C:
	.4byte 0x00000975
_080A4D40:
	.4byte gUnknown_0816A2F1
_080A4D44:
	.4byte 0x0000178A
_080A4D48:
	ldr r2, _080A4FBC  @ =0x00001789
	add r0, r7, r2
	ldrb r0, [r0]
	cmp r0, #2
	bne _080A4D74
	ldr r1, _080A4FC0  @ =0x000016EB
	add r0, r7, r1
	ldrb r0, [r0]
	cmp r0, #15
	bne _080A4D74
_080A4D5C:
	ldr r0, _080A4FC4  @ =gUnknown_0816AB08
	add r0, r0, r9
	ldrb r1, [r0]
	ldr r2, _080A4FC8  @ =0x000016F6
	add r0, r7, r2
	strb r1, [r0]
	ldr r0, _080A4FCC  @ =gUnknown_0816AD0D
	add r0, r0, r9
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r7, r2
	strb r1, [r0]
_080A4D74:
	ldr r1, _080A4FD0  @ =0x0000097C
	add r0, r7, r1
	mov r1, #0
	strb r1, [r0]
	ldr r0, _080A4FD4  @ =0x0000097D
	add r2, r7, r0
	strb r1, [r2]
	ldr r1, _080A4FD8  @ =0x0000178A
	add r0, r7, r1
	ldrb r1, [r0]
	mov r0, #5
	and r0, r0, r1
	cmp r0, #0
	beq _080A4DA6
	ldr r1, _080A4FDC  @ =0x00001790
	add r0, r7, r1
	ldrb r0, [r0]
	sub r0, r0, #1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r9, r0
	ldr r0, _080A4FE0  @ =gUnknown_0816B32E
	add r0, r0, r9
	ldrb r0, [r0]
	strb r0, [r2]
_080A4DA6:
	ldr r1, _080A4FE4  @ =0x0000180C
	add r0, r7, r1
	ldrb r1, [r0]
	mov r0, #8
	and r0, r0, r1
	cmp r0, #0
	beq _080A4DC2
	ldr r1, _080A4FE8  @ =0x0000178C
	add r0, r7, r1
	ldrb r0, [r0]
	cmp r0, #13
	bne _080A4DC2
	mov r0, #4
	strb r0, [r2]
_080A4DC2:
	ldr r5, _080A4FEC  @ =gRam
	ldr r0, _080A4FF0  @ =0x0000096C
	add r2, r5, r0
	ldrh r0, [r2]
	lsl r1, r0, #1
	add r0, r0, r1
	lsl r0, r0, #17
	lsr r0, r0, #16
	mov r9, r0
	mov r0, #0
	strh r0, [r2]
	ldr r1, _080A4FF4  @ =0x00001732
	add r0, r5, r1
	ldrb r0, [r0]
	mov r1, sp
	strh r0, [r1]
	ldr r1, _080A4FF8  @ =gUnknown_0816B300
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	ldr r2, _080A4FFC  @ =0x00000968
	add r0, r5, r2
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r2, _080A5000  @ =0x000017E2
	add r0, r5, r2
	ldrh r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, sp
	strh r0, [r1]
	ldr r0, _080A4FD0  @ =0x0000097C
	add r4, r5, r0
	ldrh r6, [r4]
	mov r0, sp
	bl sub_080A5978
	strh r6, [r4]
	mov r8, sp
	ldr r1, _080A5004  @ =0x00000978
	add r1, r1, r5
	mov r10, r1
_080A4E16:
	ldr r0, _080A5008  @ =gUnknown_0816952E
	mov r2, r9
	lsr r1, r2, #1
	lsl r1, r1, #1
	add r1, r1, r0
	ldrh r6, [r1]
	ldr r0, _080A500C  @ =0x0000FFFF
	ldr r7, _080A4FEC  @ =gRam
	cmp r6, r0
	bne _080A4E2C
	b _080A4F68
_080A4E2C:
	ldr r1, _080A5010  @ =0x0000CFFF
	add r0, r1, #0
	and r6, r6, r0
	ldr r2, _080A5014  @ =0x00001723
	add r0, r7, r2
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r7, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	orr r6, r6, r1
	lsl r0, r6, #16
	lsr r6, r0, #16
	add r4, r6, #0
	mov r1, r8
	ldrh r0, [r1]
	add r1, r6, #0
	bl sub_080A452C
	mov r2, #224
	lsl r2, r2, #4
	add r1, r2, #0
	add r0, r6, #0
	and r0, r0, r1
	mov r1, #128
	lsl r1, r1, #2
	cmp r0, r1
	beq _080A4E88
	ldr r1, _080A5018  @ =0x000017D6
	add r0, r7, r1
	ldrh r0, [r0]
	cmp r0, #0
	bne _080A4E88
	ldr r2, _080A501C  @ =0x0000F1FF
	add r0, r2, #0
	and r4, r4, r0
	mov r1, #192
	lsl r1, r1, #3
	add r0, r1, #0
	orr r4, r4, r0
	mov r2, r8
	ldrh r0, [r2]
	add r1, r4, #0
	bl sub_080A452C
_080A4E88:
	ldr r6, _080A4FEC  @ =gRam
	ldr r1, _080A4FD0  @ =0x0000097C
	add r0, r6, r1
	ldrh r2, [r0]
	mov r1, #0
	ldrsh r0, [r0, r1]
	cmp r0, #0
	beq _080A4EAA
	ldr r1, _080A501C  @ =0x0000F1FF
	add r0, r1, #0
	add r1, r4, #0
	and r1, r1, r0
	orr r1, r1, r2
	mov r2, r8
	ldrh r0, [r2]
	bl sub_080A452C
_080A4EAA:
	mov r0, r8
	ldrh r1, [r0]
	ldr r2, _080A5020  @ =0x00000974
	add r0, r6, r2
	ldrb r5, [r0]
	add r2, r2, #1
	add r0, r6, r2
	ldrb r7, [r0]
	lsr r1, r1, #2
	lsl r1, r1, #3
	mov r2, #170
	lsl r2, r2, #3
	add r0, r6, r2
	add r3, r1, r0
	ldr r0, _080A5024  @ =gUnknown_03003E68
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A4EF6
	ldr r0, _080A5028  @ =0x000001FF
	add r4, r0, #0
	ldrh r0, [r3, #2]
	ldr r6, _080A502C  @ =0xFFFFFE00
	add r2, r6, #0
	and r2, r2, r0
	orr r2, r2, r5
	strh r2, [r3, #2]
	strb r7, [r3]
	cmp r5, #240
	bls _080A4EF6
	lsl r0, r2, #23
	lsr r0, r0, #23
	mov r1, #128
	lsl r1, r1, #1
	orr r0, r0, r1
	and r0, r0, r4
	and r2, r2, r6
	orr r2, r2, r0
	strh r2, [r3, #2]
_080A4EF6:
	ldr r2, _080A4FEC  @ =gRam
	ldr r1, _080A5020  @ =0x00000974
	add r0, r2, r1
	ldrh r0, [r0]
	ldr r1, _080A5030  @ =0x00001734
	add r3, r2, r1
	strb r0, [r3]
	mov r1, #150
	lsl r1, r1, #4
	add r0, r2, r1
	mov r4, #255
	ldrb r1, [r0]
	ldrb r0, [r3]
	sub r1, r1, r0
	lsl r1, r1, #16
	lsr r6, r1, #16
	add r7, r2, #0
	cmp r1, #0
	bge _080A4F24
	eor r6, r6, r4
	add r0, r6, #1
	lsl r0, r0, #16
	lsr r6, r0, #16
_080A4F24:
	cmp r6, #127
	bls _080A4F32
	mov r2, r10
	ldrh r1, [r2]
	mov r0, #1
	orr r0, r0, r1
	strh r0, [r2]
_080A4F32:
	mov r0, r8
	ldrh r1, [r0]
	mov r2, r10
	ldrh r3, [r2]
	lsr r1, r1, #2
	lsl r1, r1, #3
	mov r2, #170
	lsl r2, r2, #3
	add r0, r7, r2
	add r1, r1, r0
	lsr r3, r3, #1
	lsl r3, r3, #6
	ldrb r2, [r1, #3]
	mov r0, #63
	and r0, r0, r2
	orr r0, r0, r3
	strb r0, [r1, #3]
	mov r0, r10
	ldrh r1, [r0]
	mov r0, #254
	and r0, r0, r1
	mov r1, r10
	strh r0, [r1]
	mov r2, r8
	ldrh r0, [r2]
	add r0, r0, #4
	strh r0, [r2]
_080A4F68:
	ldr r0, _080A5020  @ =0x00000974
	add r3, r7, r0
	ldrb r0, [r3]
	add r0, r0, #8
	strb r0, [r3]
	mov r0, r9
	add r0, r0, #2
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r9, r0
	ldr r1, _080A4FF0  @ =0x0000096C
	add r2, r7, r1
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080A4FA2
	ldr r0, _080A5034  @ =0x00000975
	add r1, r7, r0
	ldrb r0, [r1]
	add r0, r0, #8
	strb r0, [r1]
	mov r1, #151
	lsl r1, r1, #4
	add r0, r7, r1
	ldrb r0, [r0]
	strb r0, [r3]
_080A4FA2:
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r0, #3
	beq _080A4FAC
	b _080A4E16
_080A4FAC:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080A4FBC:
	.4byte 0x00001789
_080A4FC0:
	.4byte 0x000016EB
_080A4FC4:
	.4byte gUnknown_0816AB08
_080A4FC8:
	.4byte 0x000016F6
_080A4FCC:
	.4byte gUnknown_0816AD0D
_080A4FD0:
	.4byte 0x0000097C
_080A4FD4:
	.4byte 0x0000097D
_080A4FD8:
	.4byte 0x0000178A
_080A4FDC:
	.4byte 0x00001790
_080A4FE0:
	.4byte gUnknown_0816B32E
_080A4FE4:
	.4byte 0x0000180C
_080A4FE8:
	.4byte 0x0000178C
_080A4FEC:
	.4byte gRam
_080A4FF0:
	.4byte 0x0000096C
_080A4FF4:
	.4byte 0x00001732
_080A4FF8:
	.4byte gUnknown_0816B300
_080A4FFC:
	.4byte 0x00000968
_080A5000:
	.4byte 0x000017E2
_080A5004:
	.4byte 0x00000978
_080A5008:
	.4byte gUnknown_0816952E
_080A500C:
	.4byte 0x0000FFFF
_080A5010:
	.4byte 0x0000CFFF
_080A5014:
	.4byte 0x00001723
_080A5018:
	.4byte 0x000017D6
_080A501C:
	.4byte 0x0000F1FF
_080A5020:
	.4byte 0x00000974
_080A5024:
	.4byte gUnknown_03003E68
_080A5028:
	.4byte 0x000001FF
_080A502C:
	.4byte 0xFFFFFE00
_080A5030:
	.4byte 0x00001734
_080A5034:
	.4byte 0x00000975
	THUMB_FUNC_END sub_080A4BD0

