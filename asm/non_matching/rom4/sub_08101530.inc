	THUMB_FUNC_START sub_08101530
sub_08101530: @ 0x08101530
	push {r4,r5,lr}
	ldr r4, _081015C0  @ =gRam
	ldr r0, _081015C4  @ =0x00000FA2
	add r1, r4, r0
	mov r0, #9
	strb r0, [r1]
	ldr r2, _081015C8  @ =0x00000FF2
	add r1, r4, r2
	mov r0, #206
	strb r0, [r1]
	ldr r3, _081015CC  @ =0x00000EE2
	add r1, r4, r3
	mov r2, #150
	lsl r2, r2, #4
	add r0, r4, r2
	ldrb r0, [r0]
	strb r0, [r1]
	add r3, r3, #32
	add r1, r4, r3
	add r2, r2, #1
	add r0, r4, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r3, _081015D0  @ =0x00000964
	add r1, r4, r3
	ldrh r0, [r1]
	sub r0, r0, #16
	mov r5, #0
	strh r0, [r1]
	ldr r0, _081015D4  @ =0x00000ED2
	add r2, r4, r0
	ldrb r0, [r1]
	strb r0, [r2]
	ldr r2, _081015D8  @ =0x00000EF2
	add r1, r4, r2
	add r3, r3, #1
	add r0, r4, r3
	ldrb r0, [r0]
	strb r0, [r1]
	mov r0, #0
	bl sub_080CEB84
	ldr r0, _081015DC  @ =0x00000FE2
	add r1, r4, r0
	mov r0, #192
	strb r0, [r1]
	ldr r2, _081015E0  @ =0x00000F92
	add r1, r4, r2
	mov r0, #21
	strb r0, [r1]
	ldr r3, _081015E4  @ =0x00000FB2
	add r0, r4, r3
	mov r1, #2
	strb r1, [r0]
	ldr r2, _081015E8  @ =0x00001172
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _081015EC  @ =0x00000AA8
	add r2, r4, r3
	ldrh r0, [r2]
	mov r3, #128
	lsl r3, r3, #6
	add r1, r3, #0
	orr r0, r0, r1
	strh r0, [r2]
	ldr r0, _081015F0  @ =0x00000DA5
	add r4, r4, r0
	strb r5, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081015C0:
	.4byte gRam
_081015C4:
	.4byte 0x00000FA2
_081015C8:
	.4byte 0x00000FF2
_081015CC:
	.4byte 0x00000EE2
_081015D0:
	.4byte 0x00000964
_081015D4:
	.4byte 0x00000ED2
_081015D8:
	.4byte 0x00000EF2
_081015DC:
	.4byte 0x00000FE2
_081015E0:
	.4byte 0x00000F92
_081015E4:
	.4byte 0x00000FB2
_081015E8:
	.4byte 0x00001172
_081015EC:
	.4byte 0x00000AA8
_081015F0:
	.4byte 0x00000DA5
	THUMB_FUNC_END sub_08101530

