	THUMB_FUNC_START sub_080BFE6C
sub_080BFE6C: @ 0x080BFE6C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #28
	str r1, [sp, #4]
	lsl r0, r0, #24
	lsr r7, r0, #24
	mov r2, #0
	mov r0, sp
	strb r2, [r0]
	ldr r1, _080BFEB0  @ =gRam
	ldr r3, _080BFEB4  @ =0x00000B14
	add r0, r1, r3
	ldrh r0, [r0]
	add r4, r1, #0
	cmp r0, #0
	bne _080BFEB8
	add r0, r7, #0
	mov r1, sp
	bl sub_080BFFFC
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r6, [sp, #4]
	cmp r6, #0
	beq _080BFEAA
	mov r0, sp
	ldrb r0, [r0]
	strb r0, [r6]
_080BFEAA:
	add r0, r1, #0
	b _080BFFEA
	.byte 0x00
	.byte 0x00
_080BFEB0:
	.4byte gRam
_080BFEB4:
	.4byte 0x00000B14
_080BFEB8:
	cmp r0, #2
	bhi _080BFED0
	mov r1, #150
	lsl r1, r1, #4
	add r0, r4, r1
	strh r2, [r0]
	ldr r3, _080BFECC  @ =0x00000964
	add r0, r4, r3
	strh r2, [r0]
	b _080BFEFC
_080BFECC:
	.4byte 0x00000964
_080BFED0:
	mov r6, #149
	lsl r6, r6, #4
	add r0, r4, r6
	ldr r2, _080BFFD0  @ =0x00000952
	add r1, r4, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	mov r3, #150
	lsl r3, r3, #4
	add r1, r4, r3
	strh r0, [r1]
	add r6, r6, #6
	add r0, r4, r6
	add r2, r2, #6
	add r1, r4, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	add r3, r3, #4
	add r1, r4, r3
	strh r0, [r1]
_080BFEFC:
	ldr r6, _080BFFD4  @ =0x00000DCF
	add r6, r6, r4
	mov r9, r6
	add r9, r9, r7
	mov r0, r9
	ldrb r6, [r0]
	ldr r1, _080BFFD8  @ =0x00000DE3
	add r1, r1, r4
	mov r8, r1
	add r8, r8, r7
	mov r2, r8
	ldrb r0, [r2]
	lsl r0, r0, #8
	add r6, r6, r0
	lsl r6, r6, #16
	str r6, [sp, #24]
	lsr r3, r6, #16
	str r3, [sp, #12]
	ldr r6, _080BFFDC  @ =0x00000DC5
	add r3, r4, r6
	add r3, r7, r3
	ldrb r5, [r3]
	ldr r0, _080BFFE0  @ =0x00000DD9
	add r2, r4, r0
	add r2, r7, r2
	ldrb r0, [r2]
	lsl r0, r0, #8
	add r5, r5, r0
	lsl r5, r5, #16
	lsr r1, r5, #16
	mov r10, r1
	mov r6, #150
	lsl r6, r6, #4
	add r0, r4, r6
	ldrh r1, [r0]
	ldr r0, [sp, #12]
	add r1, r0, r1
	add r6, r6, #4
	add r0, r4, r6
	ldrh r0, [r0]
	add r0, r0, r10
	mov r6, r9
	strb r1, [r6]
	lsr r1, r1, #8
	mov r6, r8
	strb r1, [r6]
	strb r0, [r3]
	lsr r0, r0, #8
	strb r0, [r2]
	ldr r0, _080BFFE4  @ =0x00000E47
	add r4, r4, r0
	add r4, r7, r4
	mov r0, #1
	strb r0, [r4]
	add r0, r7, #0
	mov r1, sp
	str r2, [sp, #16]
	str r3, [sp, #20]
	bl sub_080BFFFC
	lsl r0, r0, #24
	lsr r1, r0, #24
	str r1, [sp, #8]
	mov r6, #0
	strb r6, [r4]
	lsr r5, r5, #24
	ldr r2, [sp, #16]
	strb r5, [r2]
	ldr r3, [sp, #20]
	mov r0, r10
	strb r0, [r3]
	ldr r2, [sp, #24]
	lsr r6, r2, #24
	mov r3, r8
	strb r6, [r3]
	mov r6, sp
	ldrb r0, [r6, #12]
	mov r6, r9
	strb r0, [r6]
	mov r0, sp
	mov r2, #0
	strb r2, [r0]
	cmp r1, #1
	bne _080BFFA6
	strb r1, [r0]
_080BFFA6:
	mov r1, sp
	add r1, r1, #1
	add r0, r7, #0
	bl sub_080BFFFC
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r3, [sp, #4]
	cmp r3, #0
	beq _080BFFC0
	mov r0, sp
	ldrb r0, [r0]
	strb r0, [r3]
_080BFFC0:
	ldr r6, [sp, #8]
	lsl r0, r6, #1
	add r0, r1, r0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080BFFE8
	mov r0, #0
	b _080BFFEA
_080BFFD0:
	.4byte 0x00000952
_080BFFD4:
	.4byte 0x00000DCF
_080BFFD8:
	.4byte 0x00000DE3
_080BFFDC:
	.4byte 0x00000DC5
_080BFFE0:
	.4byte 0x00000DD9
_080BFFE4:
	.4byte 0x00000E47
_080BFFE8:
	mov r0, #1
_080BFFEA:
	add sp, sp, #28
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080BFE6C

	.byte 0x00
	.byte 0x00
