	THUMB_FUNC_START sub_08105960
sub_08105960: @ 0x08105960
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	ldr r6, _08105980  @ =gRam
	ldr r1, _08105984  @ =0x00000FC2
	add r0, r6, r1
	add r7, r4, r0
	ldrb r2, [r7]
	cmp r2, #0
	beq _08105988
	add r0, r4, #0
	bl sub_080C351C
	b _08105A3C
	.byte 0x00
	.byte 0x00
_08105980:
	.4byte gRam
_08105984:
	.4byte 0x00000FC2
_08105988:
	ldr r1, _081059DC  @ =0x00001052
	add r0, r6, r1
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #4
	beq _081059F4
	bl GetRandomInt
	mov r1, #31
	and r1, r1, r0
	add r1, r1, #16
	strb r1, [r7]
	bl GetRandomInt
	mov r2, #15
	and r2, r2, r0
	ldr r0, _081059E0  @ =0x00000F22
	add r1, r6, r0
	add r1, r4, r1
	ldr r0, _081059E4  @ =gUnknown_0817BEA8
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _081059E8  @ =0x00000F12
	add r1, r6, r0
	add r1, r4, r1
	ldr r0, _081059EC  @ =gUnknown_0817BEB8
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r1]
	ldr r0, _081059F0  @ =0x00000F52
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _08105A3C
	.byte 0x00
	.byte 0x00
_081059DC:
	.4byte 0x00001052
_081059E0:
	.4byte 0x00000F22
_081059E4:
	.4byte gUnknown_0817BEA8
_081059E8:
	.4byte 0x00000F12
_081059EC:
	.4byte gUnknown_0817BEB8
_081059F0:
	.4byte 0x00000F52
_081059F4:
	strb r2, [r1]
	ldr r1, _08105A44  @ =0x00000F52
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #2
	strb r1, [r0]
	bl GetRandomInt
	mov r2, #7
	and r2, r2, r0
	ldr r0, _08105A48  @ =0x00000F22
	add r1, r6, r0
	add r1, r5, r1
	ldr r0, _08105A4C  @ =gUnknown_0817BEA8
	add r0, r2, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	strb r0, [r1]
	ldr r0, _08105A50  @ =0x00000F12
	add r1, r6, r0
	add r1, r5, r1
	ldr r0, _08105A54  @ =gUnknown_0817BEB8
	add r2, r2, r0
	ldrb r0, [r2]
	lsl r0, r0, #2
	strb r0, [r1]
	bl GetRandomInt
	add r0, r5, #0
	mov r1, #64
	bl sub_080C35FC
	add r0, r5, #0
	mov r1, #81
	bl sub_080CF140
_08105A3C:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08105A44:
	.4byte 0x00000F52
_08105A48:
	.4byte 0x00000F22
_08105A4C:
	.4byte gUnknown_0817BEA8
_08105A50:
	.4byte 0x00000F12
_08105A54:
	.4byte gUnknown_0817BEB8
	THUMB_FUNC_END sub_08105960

