	THUMB_FUNC_START sub_080F8844
sub_080F8844: @ 0x080F8844
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r2, _080F888C  @ =gRam
	ldr r1, _080F8890  @ =0x00000FC2
	add r0, r2, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F88DA
	ldr r0, _080F8894  @ =0x00000F52
	add r1, r2, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080F8898  @ =0x00000F82
	add r1, r2, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F88A0
	ldr r1, _080F889C  @ =0x000009AC
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #26
	beq _080F88A0
	bl GetRandomInt
	mov r2, #3
	and r2, r2, r0
	b _080F88AA
	.byte 0x00
	.byte 0x00
_080F888C:
	.4byte gRam
_080F8890:
	.4byte 0x00000FC2
_080F8894:
	.4byte 0x00000F52
_080F8898:
	.4byte 0x00000F82
_080F889C:
	.4byte 0x000009AC
_080F88A0:
	add r0, r5, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r2, r0, #24
_080F88AA:
	ldr r4, _080F88E8  @ =gRam
	ldr r0, _080F88EC  @ =0x00000F22
	add r1, r4, r0
	add r1, r5, r1
	ldr r0, _080F88F0  @ =gUnknown_0822A938
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080F88F4  @ =0x00000F12
	add r1, r4, r0
	add r1, r5, r1
	ldr r0, _080F88F8  @ =gUnknown_0822A93A
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	bl GetRandomInt
	ldr r1, _080F88FC  @ =0x00001152
	add r4, r4, r1
	add r4, r5, r4
	mov r1, #7
	and r1, r1, r0
	add r1, r1, #19
	strb r1, [r4]
_080F88DA:
	add r0, r5, #0
	bl sub_080F90E4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F88E8:
	.4byte gRam
_080F88EC:
	.4byte 0x00000F22
_080F88F0:
	.4byte gUnknown_0822A938
_080F88F4:
	.4byte 0x00000F12
_080F88F8:
	.4byte gUnknown_0822A93A
_080F88FC:
	.4byte 0x00001152
	THUMB_FUNC_END sub_080F8844

