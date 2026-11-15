	THUMB_FUNC_START sub_08097A74
sub_08097A74: @ 0x08097A74
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #20
	mov r2, sp
	ldr r1, _08097B6C  @ =gRam
	ldr r3, _08097B70  @ =0x000017B2
	add r0, r1, r3
	ldrh r0, [r0]
	mov r5, #0
	strh r0, [r2]
	add r3, r3, #2
	add r0, r1, r3
	ldrh r0, [r0]
	strh r0, [r2, #2]
	add r6, sp, #4
	ldr r2, _08097B74  @ =0x000017B8
	add r0, r1, r2
	ldrh r0, [r0]
	strh r0, [r6]
	add r3, r3, #6
	add r0, r1, r3
	ldrh r0, [r0]
	strh r0, [r6, #2]
	add r4, sp, #8
	add r2, r2, #14
	add r0, r1, r2
	ldrh r0, [r0]
	strh r0, [r4]
	add r3, r3, #14
	add r0, r1, r3
	ldrh r0, [r0]
	strh r0, [r4, #2]
	add r3, sp, #12
	sub r2, r2, #4
	add r0, r1, r2
	ldrh r0, [r0]
	strh r0, [r3]
	add r2, r2, #2
	add r0, r1, r2
	ldrh r0, [r0]
	strh r0, [r3, #2]
	ldr r2, _08097B78  @ =0x00000545
	add r0, r1, r2
	ldrb r2, [r0]
	mov r0, #15
	and r0, r0, r2
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r1
	mov r8, r2
	strb r0, [r2]
	ldr r2, _08097B7C  @ =0x00000961
	add r0, r1, r2
	strb r5, [r0]
	ldr r0, _08097B80  @ =0x00000964
	add r5, r1, r0
	mov r0, #3
	strh r0, [r5]
	ldr r0, _08097B84  @ =0x00000968
	add r2, r1, r0
	mov r0, #2
	strh r0, [r2]
	mov r0, #1
	mov r9, r0
	add r7, r1, #0
	mov r10, r6
	mov r1, r8
	ldrh r3, [r1]
	mov r1, sp
	strh r3, [r1, #16]
	mov r12, r2
_08097B08:
	mov r6, #0
	ldrh r0, [r5]
	mov r1, sp
	ldrh r1, [r1, #16]
	and r0, r0, r1
	cmp r0, #0
	beq _08097BB8
	mov r2, r12
	ldrh r1, [r2]
	and r0, r0, r1
	cmp r0, #0
	bne _08097B22
	mov r6, #1
_08097B22:
	mov r3, r9
	lsl r0, r3, #1
	mov r1, sp
	add r4, r1, r0
	mov r2, #0
	mov r8, r2
	mov r1, #32
	strh r1, [r4]
	ldr r1, _08097B6C  @ =gRam
	ldr r2, _08097B88  @ =0x000017DA
	add r3, r1, r2
	ldrb r1, [r3]
	add r2, r0, #0
	cmp r1, #0
	beq _08097B4E
	add r0, r1, #0
	sub r0, r0, #1
	lsl r0, r0, #1
	ldr r3, _08097B8C  @ =gUnknown_08167E10
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r4]
_08097B4E:
	ldr r1, _08097B90  @ =gUnknown_030039FE
	ldrb r0, [r1]
	ldr r3, _08097B94  @ =gUnknown_03003957
	ldrb r1, [r3]
	orr r1, r1, r0
	mov r3, #0
	ldrsh r0, [r5, r3]
	and r1, r1, r0
	cmp r1, r0
	bne _08097B98
	mov r0, r10
	add r1, r0, r2
	mov r0, #2
	strh r0, [r1]
	b _08097BA8
_08097B6C:
	.4byte gRam
_08097B70:
	.4byte 0x000017B2
_08097B74:
	.4byte 0x000017B8
_08097B78:
	.4byte 0x00000545
_08097B7C:
	.4byte 0x00000961
_08097B80:
	.4byte 0x00000964
_08097B84:
	.4byte 0x00000968
_08097B88:
	.4byte 0x000017DA
_08097B8C:
	.4byte gUnknown_08167E10
_08097B90:
	.4byte gUnknown_030039FE
_08097B94:
	.4byte gUnknown_03003957
_08097B98:
	mov r0, sp
	add r0, r0, r2
	add r0, r0, #8
	strh r6, [r0]
	mov r1, r10
	add r0, r1, r2
	mov r3, r8
	strh r3, [r0]
_08097BA8:
	mov r1, sp
	add r1, r1, r2
	add r1, r1, #12
	ldrh r0, [r1]
	cmp r0, #0
	bne _08097BB8
	mov r0, #240
	strh r0, [r1]
_08097BB8:
	ldrh r0, [r5]
	lsl r0, r0, #2
	strh r0, [r5]
	mov r1, r12
	ldrh r0, [r1]
	lsl r0, r0, #2
	strh r0, [r1]
	mov r0, r9
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	mov r9, r2
	cmp r0, #0
	bge _08097B08
	mov r0, sp
	ldrh r1, [r0]
	ldr r3, _08097C30  @ =0x000017B2
	add r0, r7, r3
	strh r1, [r0]
	mov r0, sp
	ldrh r1, [r0, #2]
	ldr r2, _08097C34  @ =0x000017B4
	add r0, r7, r2
	strh r1, [r0]
	mov r3, r10
	ldrh r1, [r3]
	add r2, r2, #4
	add r0, r7, r2
	strh r1, [r0]
	ldrh r1, [r3, #2]
	ldr r3, _08097C38  @ =0x000017BA
	add r0, r7, r3
	strh r1, [r0]
	mov r0, sp
	ldrh r1, [r0, #8]
	add r2, r2, #14
	add r0, r7, r2
	strh r1, [r0]
	mov r3, sp
	ldrh r1, [r3, #10]
	add r2, r2, #2
	add r0, r7, r2
	strh r1, [r0]
	ldrh r1, [r3, #12]
	ldr r3, _08097C3C  @ =0x000017C2
	add r0, r7, r3
	strh r1, [r0]
	mov r0, sp
	ldrh r1, [r0, #14]
	sub r2, r2, #4
	add r0, r7, r2
	strh r1, [r0]
	add sp, sp, #20
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08097C30:
	.4byte 0x000017B2
_08097C34:
	.4byte 0x000017B4
_08097C38:
	.4byte 0x000017BA
_08097C3C:
	.4byte 0x000017C2
	THUMB_FUNC_END sub_08097A74

