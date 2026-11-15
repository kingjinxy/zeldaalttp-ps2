	THUMB_FUNC_START sub_08103AB8
sub_08103AB8: @ 0x08103AB8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r0, #155
	add r1, r5, #0
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	bge _08103ACE
	b _08103BCE
_08103ACE:
	add r0, r5, #0
	mov r1, #95
	bl sub_080CF140
	ldr r3, _08103B74  @ =gRam
	ldr r1, _08103B78  @ =0x00000F82
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	ldr r2, _08103B7C  @ =0x00001172
	add r0, r3, r2
	add r0, r4, r0
	strb r1, [r0]
	mov r0, #150
	lsl r0, r0, #4
	add r1, r3, r0
	ldrh r0, [r1]
	add r0, r0, #4
	strh r0, [r1]
	ldr r2, _08103B80  @ =0x00000EE2
	add r0, r3, r2
	add r0, r4, r0
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _08103B84  @ =0x00000F02
	add r0, r3, r1
	add r0, r4, r0
	ldr r2, _08103B88  @ =0x00000961
	add r1, r3, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _08103B8C  @ =0x00000ED2
	add r0, r3, r1
	add r0, r4, r0
	add r2, r2, #3
	add r1, r3, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _08103B90  @ =0x00000EF2
	add r0, r3, r1
	add r0, r4, r0
	add r2, r2, #1
	add r1, r3, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _08103B94  @ =0x00000FB2
	add r0, r3, r1
	add r0, r5, r0
	ldrb r2, [r0]
	ldr r0, _08103B98  @ =0x00000F22
	add r1, r3, r0
	add r1, r4, r1
	ldr r0, _08103B9C  @ =gUnknown_0817BA50
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _08103BA0  @ =0x00000F12
	add r1, r3, r0
	add r1, r4, r1
	ldr r0, _08103BA4  @ =gUnknown_0817BA54
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r1]
	ldr r1, _08103BA8  @ =0x00000E75
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #72
	strb r1, [r0]
	ldr r2, _08103BAC  @ =0x00001122
	add r0, r3, r2
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	ldr r0, _08103BB0  @ =gShield
	ldrb r0, [r0]
	cmp r0, #3
	beq _08103BB8
	ldr r1, _08103BB4  @ =0x000011B2
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #0
	b _08103BC0
_08103B74:
	.4byte gRam
_08103B78:
	.4byte 0x00000F82
_08103B7C:
	.4byte 0x00001172
_08103B80:
	.4byte 0x00000EE2
_08103B84:
	.4byte 0x00000F02
_08103B88:
	.4byte 0x00000961
_08103B8C:
	.4byte 0x00000ED2
_08103B90:
	.4byte 0x00000EF2
_08103B94:
	.4byte 0x00000FB2
_08103B98:
	.4byte 0x00000F22
_08103B9C:
	.4byte gUnknown_0817BA50
_08103BA0:
	.4byte 0x00000F12
_08103BA4:
	.4byte gUnknown_0817BA54
_08103BA8:
	.4byte 0x00000E75
_08103BAC:
	.4byte 0x00001122
_08103BB0:
	.4byte gShield
_08103BB4:
	.4byte 0x000011B2
_08103BB8:
	ldr r2, _08103BD4  @ =0x000011B2
	add r0, r3, r2
	add r0, r4, r0
	mov r1, #32
_08103BC0:
	strb r1, [r0]
	ldr r0, _08103BD8  @ =gRam
	ldr r1, _08103BDC  @ =0x00001132
	add r0, r0, r1
	add r0, r4, r0
	mov r1, #20
	strb r1, [r0]
_08103BCE:
	pop {r4,r5}
	pop {r0}
	bx r0
_08103BD4:
	.4byte 0x000011B2
_08103BD8:
	.4byte gRam
_08103BDC:
	.4byte 0x00001132
	THUMB_FUNC_END sub_08103AB8

