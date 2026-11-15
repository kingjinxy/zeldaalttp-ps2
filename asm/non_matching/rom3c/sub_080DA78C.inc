	THUMB_FUNC_START sub_080DA78C
sub_080DA78C: @ 0x080DA78C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	bl sub_080DB1CC
	ldr r6, _080DA804  @ =gRam
	ldr r1, _080DA808  @ =0x000010D2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080DA7C6
	ldr r2, _080DA80C  @ =0x00000FC2
	add r0, r6, r2
	add r0, r4, r0
	mov r2, #0
	mov r1, #32
	strb r1, [r0]
	ldr r1, _080DA810  @ =0x00000F92
	add r0, r6, r1
	add r0, r4, r0
	strb r2, [r0]
	ldr r2, _080DA814  @ =0x00000FB2
	add r0, r6, r2
	add r0, r4, r0
	mov r1, #3
	strb r1, [r0]
_080DA7C6:
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DA7FE
	add r0, r5, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DA7FE
	ldr r1, _080DA818  @ =0x00001172
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #1
	strb r1, [r0]
	ldr r1, _080DA81C  @ =gUnknown_08175BAC
	ldr r2, _080DA820  @ =0x00000F52
	add r0, r6, r2
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
_080DA7FE:
	pop {r4-r6}
	pop {r0}
	bx r0
_080DA804:
	.4byte gRam
_080DA808:
	.4byte 0x000010D2
_080DA80C:
	.4byte 0x00000FC2
_080DA810:
	.4byte 0x00000F92
_080DA814:
	.4byte 0x00000FB2
_080DA818:
	.4byte 0x00001172
_080DA81C:
	.4byte gUnknown_08175BAC
_080DA820:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DA78C

