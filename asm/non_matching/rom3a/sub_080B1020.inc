	THUMB_FUNC_START sub_080B1020
sub_080B1020: @ 0x080B1020
	push {r4-r6,lr}
	mov r6, r10
	mov r5, r9
	mov r4, r8
	push {r4-r6}
	ldr r1, _080B1044  @ =gRam
	ldr r0, _080B1048  @ =0x00000E15
	add r2, r1, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _080B1050
	ldr r0, _080B104C  @ =0x000009AD
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080B1060
	.byte 0x00
	.byte 0x00
_080B1044:
	.4byte gRam
_080B1048:
	.4byte 0x00000E15
_080B104C:
	.4byte 0x000009AD
_080B1050:
	ldr r0, _080B10C0  @ =gUnknown_0816E8FC
	ldrb r1, [r2]
	sub r1, r1, #1
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r0, [r1]
	bl _call_via_r0
_080B1060:
	ldr r4, _080B10C4  @ =gRam
	ldr r1, _080B10C8  @ =0x000009AC
	add r1, r1, r4
	mov r9, r1
	ldrb r0, [r1]
	mov r10, r0
	ldr r1, _080B10CC  @ =0x000009AD
	add r6, r4, r1
	ldrb r5, [r6]
	ldr r1, _080B10D0  @ =0x00001AD0
	add r0, r4, r1
	mov r1, #2
	mov r8, r1
	mov r1, r8
	strb r1, [r0]
	bl sub_081295CC
	add r5, r5, #1
	strb r5, [r6]
	mov r1, r10
	mov r0, r9
	strb r1, [r0]
	ldr r1, _080B10D4  @ =0x00000A02
	add r0, r4, r1
	mov r1, r8
	strb r1, [r0]
	ldr r0, _080B10D8  @ =0x00000A3C
	add r1, r4, r0
	mov r2, #0
	mov r0, #26
	strh r0, [r1]
	ldr r1, _080B10DC  @ =0x000009EC
	add r0, r4, r1
	strb r2, [r0]
	sub r1, r1, #148
	add r0, r4, r1
	ldrh r0, [r0]
	mov r1, #182
	lsl r1, r1, #5
	add r4, r4, r1
	strh r0, [r4]
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r6}
	pop {r0}
	bx r0
_080B10C0:
	.4byte gUnknown_0816E8FC
_080B10C4:
	.4byte gRam
_080B10C8:
	.4byte 0x000009AC
_080B10CC:
	.4byte 0x000009AD
_080B10D0:
	.4byte 0x00001AD0
_080B10D4:
	.4byte 0x00000A02
_080B10D8:
	.4byte 0x00000A3C
_080B10DC:
	.4byte 0x000009EC
	THUMB_FUNC_END sub_080B1020

