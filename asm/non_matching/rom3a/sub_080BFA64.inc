	THUMB_FUNC_START sub_080BFA64
sub_080BFA64: @ 0x080BFA64
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #28
	str r1, [sp, #4]
	lsl r0, r0, #24
	lsr r7, r0, #24
	mov r1, #0
	mov r0, sp
	strb r1, [r0]
	ldr r1, _080BFAA4  @ =gRam
	ldr r2, _080BFAA8  @ =0x000009B2
	add r0, r1, r2
	mov r2, #0
	ldrsb r2, [r0, r2]
	add r4, r1, #0
	cmp r2, #0
	bne _080BFAB4
	ldr r6, _080BFAAC  @ =0x00000A74
	add r0, r4, r6
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080BFAB4
	ldr r1, _080BFAB0  @ =0x0000187A
	add r0, r4, r1
	add r0, r7, r0
	strb r2, [r0]
	mov r0, #0
	b _080BFC22
_080BFAA4:
	.4byte gRam
_080BFAA8:
	.4byte 0x000009B2
_080BFAAC:
	.4byte 0x00000A74
_080BFAB0:
	.4byte 0x0000187A
_080BFAB4:
	ldr r2, _080BFADC  @ =0x00000B14
	add r0, r4, r2
	ldrh r0, [r0]
	cmp r0, #0
	bne _080BFAE0
	add r0, r7, #0
	mov r1, sp
	bl sub_080C1B08
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r6, [sp, #4]
	cmp r6, #0
	beq _080BFAD6
	mov r0, sp
	ldrb r0, [r0]
	strb r0, [r6]
_080BFAD6:
	add r0, r1, #0
	b _080BFC22
	.byte 0x00
	.byte 0x00
_080BFADC:
	.4byte 0x00000B14
_080BFAE0:
	cmp r0, #2
	bls _080BFAFC
	mov r1, #150
	lsl r1, r1, #4
	add r0, r4, r1
	mov r1, #0
	strh r1, [r0]
	ldr r2, _080BFAF8  @ =0x00000964
	add r0, r4, r2
	strh r1, [r0]
	b _080BFB26
	.byte 0x00
	.byte 0x00
_080BFAF8:
	.4byte 0x00000964
_080BFAFC:
	mov r6, #149
	lsl r6, r6, #4
	add r0, r4, r6
	ldr r2, _080BFC04  @ =0x00000952
	add r1, r4, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	add r6, r6, #16
	add r1, r4, r6
	strh r0, [r1]
	ldr r1, _080BFC08  @ =0x00000956
	add r0, r4, r1
	add r2, r2, #6
	add r1, r4, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	add r6, r6, #4
	add r1, r4, r6
	strh r0, [r1]
_080BFB26:
	ldr r0, _080BFC0C  @ =0x00000DCF
	add r0, r0, r4
	mov r9, r0
	add r9, r9, r7
	mov r1, r9
	ldrb r6, [r1]
	ldr r2, _080BFC10  @ =0x00000DE3
	add r2, r2, r4
	mov r8, r2
	add r8, r8, r7
	mov r1, r8
	ldrb r0, [r1]
	lsl r0, r0, #8
	add r6, r6, r0
	lsl r6, r6, #16
	str r6, [sp, #24]
	lsr r2, r6, #16
	str r2, [sp, #8]
	ldr r6, _080BFC14  @ =0x00000DC5
	add r3, r4, r6
	add r3, r7, r3
	ldrb r5, [r3]
	ldr r0, _080BFC18  @ =0x00000DD9
	add r2, r4, r0
	add r2, r7, r2
	ldrb r0, [r2]
	lsl r0, r0, #8
	add r5, r5, r0
	lsl r5, r5, #16
	lsr r1, r5, #16
	str r1, [sp, #12]
	mov r6, #150
	lsl r6, r6, #4
	add r0, r4, r6
	ldrh r1, [r0]
	ldr r0, [sp, #8]
	add r1, r0, r1
	add r6, r6, #4
	add r0, r4, r6
	ldrh r0, [r0]
	ldr r6, [sp, #12]
	add r0, r6, r0
	mov r6, r9
	strb r1, [r6]
	lsr r1, r1, #8
	mov r6, r8
	strb r1, [r6]
	strb r0, [r3]
	lsr r0, r0, #8
	strb r0, [r2]
	ldr r0, _080BFC1C  @ =0x00000E47
	add r4, r4, r0
	add r4, r7, r4
	mov r1, #1
	strb r1, [r4]
	add r0, r7, #0
	mov r1, sp
	str r2, [sp, #16]
	str r3, [sp, #20]
	bl sub_080C1B08
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r10, r0
	mov r6, #0
	strb r6, [r4]
	lsr r5, r5, #24
	ldr r2, [sp, #16]
	strb r5, [r2]
	ldr r3, [sp, #20]
	mov r0, sp
	ldrb r0, [r0, #12]
	strb r0, [r3]
	ldr r1, [sp, #24]
	lsr r6, r1, #24
	mov r2, r8
	strb r6, [r2]
	mov r6, sp
	ldrb r0, [r6, #8]
	mov r6, r9
	strb r0, [r6]
	mov r0, sp
	mov r1, #0
	strb r1, [r0]
	mov r2, r10
	cmp r2, #0
	beq _080BFBD8
	mov r6, #1
	strb r6, [r0]
_080BFBD8:
	mov r1, sp
	add r1, r1, #1
	add r0, r7, #0
	bl sub_080C1B08
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r0, [sp, #4]
	cmp r0, #0
	beq _080BFBF4
	mov r0, sp
	ldrb r0, [r0]
	ldr r2, [sp, #4]
	strb r0, [r2]
_080BFBF4:
	mov r6, r10
	lsl r0, r6, #1
	add r0, r1, r0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080BFC20
	mov r0, #0
	b _080BFC22
_080BFC04:
	.4byte 0x00000952
_080BFC08:
	.4byte 0x00000956
_080BFC0C:
	.4byte 0x00000DCF
_080BFC10:
	.4byte 0x00000DE3
_080BFC14:
	.4byte 0x00000DC5
_080BFC18:
	.4byte 0x00000DD9
_080BFC1C:
	.4byte 0x00000E47
_080BFC20:
	mov r0, #1
_080BFC22:
	add sp, sp, #28
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080BFA64

	.byte 0x00
	.byte 0x00
