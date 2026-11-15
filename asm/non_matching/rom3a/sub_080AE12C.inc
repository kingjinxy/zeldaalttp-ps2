	THUMB_FUNC_START sub_080AE12C
sub_080AE12C: @ 0x080AE12C
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r3, r0, #24
	cmp r3, #0
	bne _080AE1CA
	ldr r1, _080AE1D4  @ =gRam
	mov r2, sp
	ldr r4, _080AE1D8  @ =0x00000E1F
	add r0, r1, r4
	ldrb r2, [r2]
	add r0, r0, r2
	strb r3, [r0]
	mov r2, sp
	add r4, r4, #10
	add r0, r1, r4
	ldrb r2, [r2]
	add r0, r0, r2
	strb r3, [r0]
	ldr r0, _080AE1DC  @ =0x00000CA2
	add r1, r1, r0
	mov r0, #13
	strh r0, [r1]
	mov r0, #45
	bl sub_080C1A8C
	mov r1, #0
	ldr r5, _080AE1E0  @ =gUnknown_02006885
	mov r4, #0
	ldr r3, _080AE1E4  @ =gUnknown_02006880
	mov r2, #1
_080AE178:
	add r0, r1, r5
	strb r4, [r0]
	add r0, r1, r3
	strb r2, [r0]
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #4
	bls _080AE178
	ldr r1, _080AE1E8  @ =gUnknown_0200688A
	mov r0, #0
	strb r0, [r1]
	ldr r2, _080AE1D4  @ =gRam
	mov r3, #162
	lsl r3, r3, #4
	add r1, r2, r3
	mov r0, #1
	strh r0, [r1]
	mov r1, sp
	ldr r4, _080AE1EC  @ =0x00000E33
	add r0, r2, r4
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #2
	strb r1, [r0]
	ldr r1, _080AE1F0  @ =gUnknown_0200688C
	mov r3, #182
	lsl r3, r3, #5
	add r0, r2, r3
	ldrh r0, [r0]
	add r0, r0, #26
	strh r0, [r1]
	add r1, r1, #2
	ldr r4, _080AE1F4  @ =0x000016C4
	add r2, r2, r4
	ldrh r0, [r2]
	add r0, r0, #8
	strh r0, [r1]
	add r1, r1, #18
	mov r0, #3
	strh r0, [r1]
_080AE1CA:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AE1D4:
	.4byte gRam
_080AE1D8:
	.4byte 0x00000E1F
_080AE1DC:
	.4byte 0x00000CA2
_080AE1E0:
	.4byte gUnknown_02006885
_080AE1E4:
	.4byte gUnknown_02006880
_080AE1E8:
	.4byte gUnknown_0200688A
_080AE1EC:
	.4byte 0x00000E33
_080AE1F0:
	.4byte gUnknown_0200688C
_080AE1F4:
	.4byte 0x000016C4
	THUMB_FUNC_END sub_080AE12C

