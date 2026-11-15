	THUMB_FUNC_START sub_08113238
sub_08113238: @ 0x08113238
	push {r4,r5,lr}
	add r5, r0, #0
	lsl r5, r5, #24
	lsr r5, r5, #24
	ldr r4, _081132CC  @ =gRam
	ldr r1, _081132D0  @ =0x00000F52
	add r0, r4, r1
	add r0, r5, r0
	mov r2, #0
	mov r1, #9
	strb r1, [r0]
	ldr r1, _081132D4  @ =0x00000F62
	add r0, r4, r1
	add r0, r5, r0
	strb r2, [r0]
	add r1, r1, #16
	add r0, r4, r1
	add r0, r5, r0
	strb r2, [r0]
	ldr r2, _081132D8  @ =0x00000FC2
	add r0, r4, r2
	add r0, r5, r0
	ldr r1, _081132DC  @ =gUnknown_0817D852
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _081132E0  @ =0x000016C4
	add r0, r4, r1
	ldrh r1, [r0]
	ldr r2, _081132E4  @ =0x00000968
	add r0, r4, r2
	strh r1, [r0]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
	add r0, r5, #0
	mov r1, #20
	bl sub_080C2DCC
	ldr r0, _081132E8  @ =0x00000F12
	add r2, r4, r0
	add r2, r5, r2
	mov r1, #150
	lsl r1, r1, #4
	add r0, r4, r1
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r0, _081132EC  @ =0x00000F22
	add r1, r4, r0
	add r1, r5, r1
	ldr r0, _081132F0  @ =0x00000961
	add r4, r4, r0
	ldrb r0, [r4]
	strb r0, [r1]
	ldrb r0, [r2]
	neg r0, r0
	strb r0, [r2]
	ldrb r0, [r1]
	neg r0, r0
	strb r0, [r1]
	ldr r1, _081132F4  @ =gUnknown_02010993
	mov r0, #1
	strb r0, [r1]
	add r0, r5, #0
	mov r1, #29
	bl sub_080CF0AC
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081132CC:
	.4byte gRam
_081132D0:
	.4byte 0x00000F52
_081132D4:
	.4byte 0x00000F62
_081132D8:
	.4byte 0x00000FC2
_081132DC:
	.4byte gUnknown_0817D852
_081132E0:
	.4byte 0x000016C4
_081132E4:
	.4byte 0x00000968
_081132E8:
	.4byte 0x00000F12
_081132EC:
	.4byte 0x00000F22
_081132F0:
	.4byte 0x00000961
_081132F4:
	.4byte gUnknown_02010993
	THUMB_FUNC_END sub_08113238

