	THUMB_FUNC_START sub_081042B4
sub_081042B4: @ 0x081042B4
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	mov r0, #149
	add r1, r4, #0
	bl sub_080CA538
	add r5, r0, #0
	cmp r5, #0
	blt _081043B4
	ldr r6, _081043BC  @ =gRam
	ldr r1, _081043C0  @ =0x00000FB2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r3, [r0]
	ldr r2, _081043C4  @ =0x00000F92
	add r1, r6, r2
	add r1, r5, r1
	mov r0, #2
	and r0, r0, r3
	lsl r0, r0, #24
	lsr r0, r0, #25
	strb r0, [r1]
	mov r4, #150
	lsl r4, r4, #4
	add r2, r6, r4
	ldr r0, _081043C8  @ =gUnknown_0817BB94
	add r0, r3, r0
	ldrb r1, [r0]
	ldr r0, _081043CC  @ =gUnknown_0817BB9C
	add r0, r3, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldrh r0, [r2]
	add r1, r1, r0
	strh r1, [r2]
	ldr r1, _081043D0  @ =0x00000EE2
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r2]
	strb r1, [r0]
	ldr r2, _081043D4  @ =0x00000F02
	add r0, r6, r2
	add r0, r5, r0
	add r4, r4, #1
	add r1, r6, r4
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _081043D8  @ =0x00000964
	add r2, r6, r0
	ldr r0, _081043DC  @ =gUnknown_0817BB98
	add r0, r3, r0
	ldrb r1, [r0]
	ldr r0, _081043E0  @ =gUnknown_0817BBA0
	add r0, r3, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldrh r4, [r2]
	add r1, r1, r4
	strh r1, [r2]
	ldr r1, _081043E4  @ =0x00000ED2
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r2]
	strb r1, [r0]
	ldr r2, _081043E8  @ =0x00000EF2
	add r0, r6, r2
	add r0, r5, r0
	ldr r4, _081043EC  @ =0x00000965
	add r1, r6, r4
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _081043F0  @ =0x00000F22
	add r1, r6, r0
	add r1, r5, r1
	ldr r0, _081043F4  @ =gUnknown_0817BBA4
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r2, r2, #32
	add r1, r6, r2
	add r1, r5, r1
	ldr r0, _081043F8  @ =gUnknown_0817BBA8
	add r3, r3, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r4, _081043FC  @ =0x00001012
	add r0, r6, r4
	add r0, r5, r0
	mov r3, #32
	strb r3, [r0]
	ldr r1, _08104400  @ =0x00000F62
	add r0, r6, r1
	add r0, r5, r0
	strb r3, [r0]
	ldr r2, _08104404  @ =0x00001122
	add r0, r6, r2
	add r0, r5, r0
	mov r2, #5
	strb r2, [r0]
	ldr r4, _08104408  @ =0x00000E75
	add r0, r6, r4
	add r0, r5, r0
	mov r1, #72
	strb r1, [r0]
	ldr r4, _0810440C  @ =0x00001172
	add r0, r6, r4
	add r0, r5, r0
	strb r1, [r0]
	ldr r1, _08104410  @ =0x00000FC2
	add r0, r6, r1
	add r0, r5, r0
	strb r2, [r0]
	ldr r0, _08104414  @ =gShield
	ldrb r0, [r0]
	cmp r0, #3
	bne _081043AC
	ldr r2, _08104418  @ =0x000011B2
	add r0, r6, r2
	add r0, r5, r0
	strb r3, [r0]
_081043AC:
	add r0, r7, #0
	mov r1, #89
	bl sub_080CF140
_081043B4:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081043BC:
	.4byte gRam
_081043C0:
	.4byte 0x00000FB2
_081043C4:
	.4byte 0x00000F92
_081043C8:
	.4byte gUnknown_0817BB94
_081043CC:
	.4byte gUnknown_0817BB9C
_081043D0:
	.4byte 0x00000EE2
_081043D4:
	.4byte 0x00000F02
_081043D8:
	.4byte 0x00000964
_081043DC:
	.4byte gUnknown_0817BB98
_081043E0:
	.4byte gUnknown_0817BBA0
_081043E4:
	.4byte 0x00000ED2
_081043E8:
	.4byte 0x00000EF2
_081043EC:
	.4byte 0x00000965
_081043F0:
	.4byte 0x00000F22
_081043F4:
	.4byte gUnknown_0817BBA4
_081043F8:
	.4byte gUnknown_0817BBA8
_081043FC:
	.4byte 0x00001012
_08104400:
	.4byte 0x00000F62
_08104404:
	.4byte 0x00001122
_08104408:
	.4byte 0x00000E75
_0810440C:
	.4byte 0x00001172
_08104410:
	.4byte 0x00000FC2
_08104414:
	.4byte gShield
_08104418:
	.4byte 0x000011B2
	THUMB_FUNC_END sub_081042B4

