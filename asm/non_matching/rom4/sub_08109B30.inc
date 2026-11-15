	THUMB_FUNC_START sub_08109B30
sub_08109B30: @ 0x08109B30
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	ldr r5, _08109B6C  @ =gRam
	ldr r1, _08109B70  @ =0x00001022
	add r0, r5, r1
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #208
	bhi _08109B4A
	mov r0, #208
	strb r0, [r2]
_08109B4A:
	ldr r1, _08109B74  @ =0x00000FC2
	add r0, r5, r1
	add r3, r4, r0
	ldrb r1, [r3]
	lsl r0, r1, #24
	cmp r0, #0
	beq _08109B80
	ldr r2, _08109B78  @ =0x00001082
	add r1, r5, r2
	add r1, r4, r1
	ldr r2, _08109B7C  @ =gUnknown_0817C354
	lsr r0, r0, #27
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	b _08109BAA
	.byte 0x00
	.byte 0x00
_08109B6C:
	.4byte gRam
_08109B70:
	.4byte 0x00001022
_08109B74:
	.4byte 0x00000FC2
_08109B78:
	.4byte 0x00001082
_08109B7C:
	.4byte gUnknown_0817C354
_08109B80:
	ldrb r0, [r2]
	cmp r0, #208
	bhi _08109B9C
	mov r0, #255
	orr r0, r0, r1
	strb r0, [r3]
	ldr r1, _08109B98  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #7
	strb r1, [r0]
	b _08109BAA
_08109B98:
	.4byte 0x00000F52
_08109B9C:
	ldr r2, _08109BB0  @ =0x00000F52
	add r0, r5, r2
	add r0, r6, r0
	mov r1, #1
	strb r1, [r0]
	mov r0, #128
	strb r0, [r3]
_08109BAA:
	pop {r4-r6}
	pop {r0}
	bx r0
_08109BB0:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_08109B30

