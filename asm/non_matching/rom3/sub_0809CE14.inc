	THUMB_FUNC_START sub_0809CE14
sub_0809CE14: @ 0x0809CE14
	push {r4,lr}
	ldr r2, _0809CE74  @ =gRam
	ldr r0, _0809CE78  @ =0x00001718
	add r1, r2, r0
	mov r0, #3
	strb r0, [r1]
	ldr r1, _0809CE7C  @ =0x000016D5
	add r0, r2, r1
	ldrb r0, [r0]
	lsr r0, r0, #1
	ldr r1, _0809CE80  @ =gUnknown_08168088
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r3, _0809CE84  @ =0x000017A9
	add r0, r2, r3
	strb r1, [r0]
	ldrb r1, [r0]
	ldr r0, _0809CE88  @ =gUnknown_08168070
	ldrb r3, [r0]
	ldr r4, _0809CE8C  @ =0x000016EB
	add r0, r2, r4
	strb r3, [r0]
	ldr r0, _0809CE90  @ =gUnknown_08168040
	add r1, r1, r0
	ldrb r1, [r1]
	ldr r3, _0809CE94  @ =0x000017A6
	add r0, r2, r3
	strh r1, [r0]
	sub r4, r4, #1
	add r1, r2, r4
	mov r0, #144
	strb r0, [r1]
	ldr r0, _0809CE98  @ =0x00001705
	add r3, r2, r0
	ldrb r1, [r3]
	mov r0, #1
	orr r0, r0, r1
	strb r0, [r3]
	ldr r1, _0809CE9C  @ =0x000016E8
	add r2, r2, r1
	mov r0, #128
	strb r0, [r2]
	bl sub_0809CA38
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809CE74:
	.4byte gRam
_0809CE78:
	.4byte 0x00001718
_0809CE7C:
	.4byte 0x000016D5
_0809CE80:
	.4byte gUnknown_08168088
_0809CE84:
	.4byte 0x000017A9
_0809CE88:
	.4byte gUnknown_08168070
_0809CE8C:
	.4byte 0x000016EB
_0809CE90:
	.4byte gUnknown_08168040
_0809CE94:
	.4byte 0x000017A6
_0809CE98:
	.4byte 0x00001705
_0809CE9C:
	.4byte 0x000016E8
	THUMB_FUNC_END sub_0809CE14

