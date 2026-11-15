	THUMB_FUNC_START sub_0810C9E4
sub_0810C9E4: @ 0x0810C9E4
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	bl sub_080ED830
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r7, #0
	bne _0810CA96
	bl GetRandomInt
	ldr r6, _0810CA9C  @ =gRam
	ldr r2, _0810CAA0  @ =0x00001052
	add r1, r6, r2
	add r1, r4, r1
	strb r0, [r1]
	mov r1, #0
	ldr r2, _0810CAA4  @ =0x000009DA
	add r0, r6, r2
	ldrh r0, [r0]
	cmp r0, #205
	bne _0810CA16
	mov r1, #1
_0810CA16:
	cmp r1, #0
	beq _0810CA48
	ldr r0, _0810CAA8  @ =0x00000EA5
	add r2, r6, r0
	add r2, r4, r2
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	mov r1, #7
	orr r0, r0, r1
	strb r0, [r2]
	ldr r2, _0810CAAC  @ =0x00001022
	add r1, r6, r2
	add r1, r4, r1
	ldrb r0, [r1]
	lsl r0, r0, #2
	strb r0, [r1]
	ldr r1, _0810CAB0  @ =0x00001012
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080E157C
_0810CA48:
	cmp r4, #13
	bne _0810CA5E
	ldr r2, _0810CAB4  @ =0x00000D18
	add r0, r6, r2
	strb r7, [r0]
	ldr r1, _0810CAB8  @ =0x00000D19
	add r0, r6, r1
	strb r7, [r0]
	mov r0, #13
	bl sub_0810CE74
_0810CA5E:
	ldr r2, _0810CABC  @ =0x00000EE2
	add r0, r6, r2
	add r0, r5, r0
	ldr r2, _0810CAC0  @ =gUnknown_0200303F
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _0810CAC4  @ =0x00000F02
	add r0, r6, r1
	add r0, r5, r0
	add r2, r2, #16
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _0810CAC8  @ =0x00000ED2
	add r0, r6, r1
	add r0, r5, r0
	add r2, r2, #16
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _0810CACC  @ =0x00000EF2
	add r0, r6, r1
	add r0, r5, r0
	add r2, r2, #16
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
_0810CA96:
	pop {r4-r7}
	pop {r0}
	bx r0
_0810CA9C:
	.4byte gRam
_0810CAA0:
	.4byte 0x00001052
_0810CAA4:
	.4byte 0x000009DA
_0810CAA8:
	.4byte 0x00000EA5
_0810CAAC:
	.4byte 0x00001022
_0810CAB0:
	.4byte 0x00001012
_0810CAB4:
	.4byte 0x00000D18
_0810CAB8:
	.4byte 0x00000D19
_0810CABC:
	.4byte 0x00000EE2
_0810CAC0:
	.4byte gUnknown_0200303F
_0810CAC4:
	.4byte 0x00000F02
_0810CAC8:
	.4byte 0x00000ED2
_0810CACC:
	.4byte 0x00000EF2
	THUMB_FUNC_END sub_0810C9E4

