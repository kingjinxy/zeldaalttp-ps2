	THUMB_FUNC_START sub_08110700
sub_08110700: @ 0x08110700
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r4, _08110754  @ =gRam
	ldr r2, _08110758  @ =0x00000ED2
	add r1, r4, r2
	add r1, r0, r1
	ldrb r2, [r1]
	mov r3, #150
	lsl r3, r3, #4
	add r1, r4, r3
	strb r2, [r1]
	ldr r2, _0811075C  @ =0x00000EF2
	add r1, r4, r2
	add r1, r0, r1
	ldrb r2, [r1]
	add r3, r3, #1
	add r1, r4, r3
	strb r2, [r1]
	ldr r2, _08110760  @ =0x00000EE2
	add r1, r4, r2
	add r1, r0, r1
	ldrb r2, [r1]
	add r3, r3, #3
	add r1, r4, r3
	strb r2, [r1]
	ldr r2, _08110764  @ =0x00000F02
	add r1, r4, r2
	add r1, r0, r1
	ldrb r2, [r1]
	add r3, r3, #1
	add r1, r4, r3
	strb r2, [r1]
	mov r1, #0
	bl sub_080C781C
	ldr r0, _08110768  @ =0x000015E2
	add r4, r4, r0
	ldrb r0, [r4]
	pop {r4}
	pop {r1}
	bx r1
_08110754:
	.4byte gRam
_08110758:
	.4byte 0x00000ED2
_0811075C:
	.4byte 0x00000EF2
_08110760:
	.4byte 0x00000EE2
_08110764:
	.4byte 0x00000F02
_08110768:
	.4byte 0x000015E2
	THUMB_FUNC_END sub_08110700

