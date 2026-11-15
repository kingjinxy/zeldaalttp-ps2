	THUMB_FUNC_START sub_080EAF54
sub_080EAF54: @ 0x080EAF54
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080EAFC8  @ =gRam
	ldr r0, _080EAFCC  @ =0x00000F92
	add r2, r6, r0
	add r2, r5, r2
	ldr r1, _080EAFD0  @ =0x00001052
	add r0, r6, r1
	add r7, r5, r0
	ldrb r3, [r7]
	mov r9, r3
	mov r1, #1
	ldr r3, _080EAFD4  @ =gUnknown_08177D8C
	ldr r4, _080EAFD8  @ =0x00000FB2
	add r0, r6, r4
	add r0, r0, r5
	mov r8, r0
	ldrb r0, [r0]
	add r0, r0, r3
	mov r3, r9
	and r1, r1, r3
	ldrb r0, [r0]
	add r1, r1, r0
	strb r1, [r2]
	mov r4, #12
	mov r9, r4
	ldr r1, _080EAFDC  @ =0x00001042
	add r0, r6, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080EB01C
	ldr r2, _080EAFE0  @ =0x00000FC2
	add r0, r6, r2
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #0
	beq _080EAFE8
	ldr r3, _080EAFE4  @ =0x00001062
	add r0, r6, r3
	add r2, r5, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080EB016
	mov r0, #11
	strb r0, [r2]
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
	b _080EB016
_080EAFC8:
	.4byte gRam
_080EAFCC:
	.4byte 0x00000F92
_080EAFD0:
	.4byte 0x00001052
_080EAFD4:
	.4byte gUnknown_08177D8C
_080EAFD8:
	.4byte 0x00000FB2
_080EAFDC:
	.4byte 0x00001042
_080EAFE0:
	.4byte 0x00000FC2
_080EAFE4:
	.4byte 0x00001062
_080EAFE8:
	add r0, r5, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, r8
	ldrb r1, [r1]
	cmp r0, r1
	beq _080EB000
	mov r2, #16
	mov r9, r2
	b _080EB01C
_080EB000:
	ldr r3, _080EB084  @ =0x00000F52
	add r0, r6, r3
	add r0, r5, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #32
	strb r0, [r4]
	add r0, r5, #0
	bl sub_080C351C
_080EB016:
	mov r0, #0
	cmp r0, #0
	beq _080EB078
_080EB01C:
	ldr r4, _080EB088  @ =gRam
	ldr r1, _080EB08C  @ =0x00000FC2
	add r0, r4, r1
	add r0, r5, r0
	mov r7, #0
	mov r2, r9
	strb r2, [r0]
	bl GetRandomInt
	ldr r3, _080EB090  @ =0x00001082
	add r1, r4, r3
	add r6, r5, r1
	ldr r3, _080EB094  @ =gUnknown_08177D90
	ldr r2, _080EB098  @ =0x00000FB2
	add r1, r4, r2
	add r1, r5, r1
	ldrb r1, [r1]
	lsl r1, r1, #1
	mov r2, #1
	and r2, r2, r0
	orr r1, r1, r2
	add r1, r1, r3
	ldrb r0, [r1]
	strb r0, [r6]
	ldr r3, _080EB084  @ =0x00000F52
	add r0, r4, r3
	add r0, r5, r0
	strb r7, [r0]
	ldr r0, _080EB09C  @ =0x00000F82
	add r4, r4, r0
	add r1, r5, r4
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #4
	bne _080EB072
	strb r7, [r1]
	add r0, r5, #0
	bl sub_080C2FA8
	strb r0, [r6]
_080EB072:
	add r0, r5, #0
	bl sub_080C351C
_080EB078:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080EB084:
	.4byte 0x00000F52
_080EB088:
	.4byte gRam
_080EB08C:
	.4byte 0x00000FC2
_080EB090:
	.4byte 0x00001082
_080EB094:
	.4byte gUnknown_08177D90
_080EB098:
	.4byte 0x00000FB2
_080EB09C:
	.4byte 0x00000F82
	THUMB_FUNC_END sub_080EAF54

