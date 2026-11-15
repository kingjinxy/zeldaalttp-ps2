	THUMB_FUNC_START sub_080FE7D0
sub_080FE7D0: @ 0x080FE7D0
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r6, r2, #0
	ldr r5, _080FE844  @ =gRam
	ldr r1, _080FE848  @ =0x000010B2
	add r0, r5, r1
	add r0, r2, r0
	mov r1, #16
	strb r1, [r0]
	ldr r1, _080FE84C  @ =0x00000FC2
	add r0, r5, r1
	add r4, r2, r0
	ldrb r3, [r4]
	cmp r3, #0
	bne _080FE810
	add r1, r1, #224
	add r0, r5, r1
	add r0, r2, r0
	mov r1, #128
	strb r1, [r0]
	ldr r1, _080FE850  @ =0x00000F52
	add r0, r5, r1
	add r0, r2, r0
	mov r1, #2
	strb r1, [r0]
	ldr r1, _080FE854  @ =0x00001172
	add r0, r5, r1
	add r0, r2, r0
	strb r3, [r0]
	mov r0, #64
	strb r0, [r4]
_080FE810:
	ldr r1, _080FE858  @ =0x00001052
	add r0, r5, r1
	add r0, r2, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	lsl r1, r1, #24
	lsr r4, r1, #26
	mov r0, #3
	and r4, r4, r0
	cmp r4, #0
	bne _080FE830
	add r0, r2, #0
	mov r1, #12
	bl sub_080CF0AC
_080FE830:
	ldr r1, _080FE85C  @ =0x00000F92
	add r0, r5, r1
	add r0, r6, r0
	ldr r1, _080FE860  @ =gUnknown_0817AB66
	add r1, r4, r1
	ldrb r1, [r1]
	strb r1, [r0]
	pop {r4-r6}
	pop {r0}
	bx r0
_080FE844:
	.4byte gRam
_080FE848:
	.4byte 0x000010B2
_080FE84C:
	.4byte 0x00000FC2
_080FE850:
	.4byte 0x00000F52
_080FE854:
	.4byte 0x00001172
_080FE858:
	.4byte 0x00001052
_080FE85C:
	.4byte 0x00000F92
_080FE860:
	.4byte gUnknown_0817AB66
	THUMB_FUNC_END sub_080FE7D0

