	THUMB_FUNC_START sub_0812D4CC
sub_0812D4CC: @ 0x0812D4CC
	push {r4-r6,lr}
	bl sub_081295F4
	ldr r4, _0812D5A8  @ =gRam
	ldr r0, _0812D5AC  @ =0x0000050C
	add r1, r4, r0
	mov r6, #0
	mov r5, #0
	mov r0, #144
	lsl r0, r0, #5
	strh r0, [r1]
	ldr r1, _0812D5B0  @ =0x04000008
	ldr r2, _0812D5B4  @ =0x0000F004
	add r0, r2, #0
	strh r0, [r1]
	ldr r0, _0812D5B8  @ =0x00000514
	add r1, r4, r0
	ldr r0, _0812D5BC  @ =0x0000F442
	strh r0, [r1]
	ldr r2, _0812D5C0  @ =0x00000516
	add r1, r4, r2
	ldr r0, _0812D5C4  @ =0x0000F842
	strh r0, [r1]
	mov r0, #163
	lsl r0, r0, #3
	add r1, r4, r0
	ldr r0, _0812D5C8  @ =0x0000FC40
	strh r0, [r1]
	sub r2, r2, #6
	add r1, r4, r2
	ldr r0, _0812D5CC  @ =0x00002081
	strh r0, [r1]
	ldr r1, _0812D5D0  @ =0x0000099D
	add r0, r4, r1
	mov r1, #8
	strb r1, [r0]
	mov r2, #149
	lsl r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _0812D5D4  @ =0x00000956
	add r0, r4, r1
	mov r2, #24
	strh r2, [r0]
	ldr r0, _0812D5D8  @ =0x00000952
	add r1, r4, r0
	mov r0, #16
	strh r0, [r1]
	ldr r1, _0812D5DC  @ =0x00000958
	add r0, r4, r1
	strh r2, [r0]
	ldr r0, _0812D5E0  @ =gUnknown_083B4920
	ldr r1, _0812D5E4  @ =0x06011000
	bl LZ77UnCompVram
	ldr r0, _0812D5E8  @ =gUnknown_083B53A0
	ldr r1, _0812D5EC  @ =0x0600C000
	bl LZ77UnCompVram
	ldr r0, _0812D5F0  @ =gUnknown_083B5144
	ldr r1, _0812D5F4  @ =0x0600A000
	bl LZ77UnCompVram
	ldr r2, _0812D5F8  @ =0x0000098E
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _0812D55E
	ldr r0, _0812D5FC  @ =gUnknown_0822B088
	bl sub_08068E7C
_0812D55E:
	mov r0, #93
	bl sub_0812FCDC
	ldr r1, _0812D600  @ =0x00000CFE
	add r0, r4, r1
	mov r1, #2
	strh r1, [r0]
	ldr r2, _0812D604  @ =0x000009C6
	add r0, r4, r2
	strh r5, [r0]
	ldr r2, _0812D608  @ =0x00000CAE
	add r0, r4, r2
	strb r6, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strb r6, [r0]
	add r2, r2, #74
	add r0, r4, r2
	strh r1, [r0]
	ldr r0, _0812D60C  @ =0x00000CF8
	add r1, r4, r0
	mov r0, #31
	strh r0, [r1]
	ldr r1, _0812D610  @ =0x00000CFC
	add r0, r4, r1
	strh r5, [r0]
	sub r2, r2, #92
	add r0, r4, r2
	strh r5, [r0]
	ldr r0, _0812D614  @ =0x000009AD
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	pop {r4-r6}
	pop {r0}
	bx r0
_0812D5A8:
	.4byte gRam
_0812D5AC:
	.4byte 0x0000050C
_0812D5B0:
	.4byte 0x04000008
_0812D5B4:
	.4byte 0x0000F004
_0812D5B8:
	.4byte 0x00000514
_0812D5BC:
	.4byte 0x0000F442
_0812D5C0:
	.4byte 0x00000516
_0812D5C4:
	.4byte 0x0000F842
_0812D5C8:
	.4byte 0x0000FC40
_0812D5CC:
	.4byte 0x00002081
_0812D5D0:
	.4byte 0x0000099D
_0812D5D4:
	.4byte 0x00000956
_0812D5D8:
	.4byte 0x00000952
_0812D5DC:
	.4byte 0x00000958
_0812D5E0:
	.4byte gUnknown_083B4920
_0812D5E4:
	.4byte 0x06011000
_0812D5E8:
	.4byte gUnknown_083B53A0
_0812D5EC:
	.4byte 0x0600C000
_0812D5F0:
	.4byte gUnknown_083B5144
_0812D5F4:
	.4byte 0x0600A000
_0812D5F8:
	.4byte 0x0000098E
_0812D5FC:
	.4byte gUnknown_0822B088
_0812D600:
	.4byte 0x00000CFE
_0812D604:
	.4byte 0x000009C6
_0812D608:
	.4byte 0x00000CAE
_0812D60C:
	.4byte 0x00000CF8
_0812D610:
	.4byte 0x00000CFC
_0812D614:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0812D4CC

