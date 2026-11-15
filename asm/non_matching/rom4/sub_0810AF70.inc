	THUMB_FUNC_START sub_0810AF70
sub_0810AF70: @ 0x0810AF70
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _0810AFC8  @ =gRam
	ldr r1, _0810AFCC  @ =0x00000FC2
	add r0, r5, r1
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #0
	bne _0810AFE8
	ldr r2, _0810AFD0  @ =0x00000F22
	add r1, r5, r2
	add r1, r4, r1
	ldr r3, _0810AFD4  @ =gUnknown_0817CAAC
	ldr r0, _0810AFD8  @ =0x00000FB2
	add r2, r5, r0
	add r2, r4, r2
	ldrb r0, [r2]
	add r0, r0, r3
	ldrb r0, [r0]
	ldrb r3, [r1]
	add r0, r0, r3
	strb r0, [r1]
	ldr r0, _0810AFDC  @ =0x00000F12
	add r1, r5, r0
	add r1, r4, r1
	ldr r3, _0810AFE0  @ =gUnknown_0817CAB0
	ldrb r0, [r2]
	add r0, r0, r3
	ldrb r0, [r0]
	ldrb r2, [r1]
	add r0, r0, r2
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _0810B02C
	ldr r3, _0810AFE4  @ =0x00000F52
	add r0, r5, r3
	add r0, r4, r0
	strb r1, [r0]
	mov r0, #64
	strb r0, [r6]
	b _0810B02C
_0810AFC8:
	.4byte gRam
_0810AFCC:
	.4byte 0x00000FC2
_0810AFD0:
	.4byte 0x00000F22
_0810AFD4:
	.4byte gUnknown_0817CAAC
_0810AFD8:
	.4byte 0x00000FB2
_0810AFDC:
	.4byte 0x00000F12
_0810AFE0:
	.4byte gUnknown_0817CAB0
_0810AFE4:
	.4byte 0x00000F52
_0810AFE8:
	ldr r0, _0810B034  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldr r3, _0810B038  @ =gUnknown_0817CAA4
	add r0, r0, #144
	add r2, r5, r0
	add r2, r4, r2
	ldrb r0, [r2]
	add r0, r0, r3
	ldrb r0, [r0]
	ldrb r3, [r1]
	add r0, r0, r3
	strb r0, [r1]
	ldr r0, _0810B03C  @ =0x00000F12
	add r1, r5, r0
	add r1, r4, r1
	ldr r3, _0810B040  @ =gUnknown_0817CAA8
	ldrb r0, [r2]
	add r0, r0, r3
	ldrb r0, [r0]
	ldrb r2, [r1]
	add r0, r0, r2
	strb r0, [r1]
	ldr r3, _0810B044  @ =0x00000F92
	add r2, r5, r3
	add r2, r4, r2
	ldr r1, _0810B048  @ =0x00001052
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	lsr r0, r0, #3
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
_0810B02C:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810B034:
	.4byte 0x00000F22
_0810B038:
	.4byte gUnknown_0817CAA4
_0810B03C:
	.4byte 0x00000F12
_0810B040:
	.4byte gUnknown_0817CAA8
_0810B044:
	.4byte 0x00000F92
_0810B048:
	.4byte 0x00001052
	THUMB_FUNC_END sub_0810AF70

