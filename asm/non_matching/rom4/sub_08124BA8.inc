	THUMB_FUNC_START sub_08124BA8
sub_08124BA8: @ 0x08124BA8
	push {r4-r7,lr}
	mov r3, #0
	ldr r4, _08124C0C  @ =gUnknown_03003045
	ldr r0, _08124C10  @ =0x000009F7
	add r7, r4, r0
	mov r2, #0
	mov r1, #143
	lsl r1, r1, #4
	add r6, r4, r1
	add r0, r0, #1
	add r5, r4, r0
_08124BBE:
	add r1, r3, r4
	ldrb r0, [r1]
	cmp r0, #49
	bne _08124BCE
	strb r2, [r7]
	strb r2, [r6]
	strb r2, [r5]
	strb r2, [r1]
_08124BCE:
	add r0, r3, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #4
	bls _08124BBE
	bl sub_08093078
	ldr r0, _08124C14  @ =gRam
	ldr r2, _08124C18  @ =0x000017A8
	add r1, r0, r2
	mov r2, #0
	strb r2, [r1]
	ldr r4, _08124C1C  @ =0x000016EA
	add r3, r0, r4
	add r4, r4, #1
	add r1, r0, r4
	strb r2, [r1]
	strb r2, [r3]
	ldr r3, _08124C20  @ =0x000016E8
	add r1, r0, r3
	strb r2, [r1]
	sub r4, r4, #2
	add r1, r0, r4
	strb r2, [r1]
	ldr r1, _08124C24  @ =0x00001718
	add r0, r0, r1
	strb r2, [r0]
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08124C0C:
	.4byte gUnknown_03003045
_08124C10:
	.4byte 0x000009F7
_08124C14:
	.4byte gRam
_08124C18:
	.4byte 0x000017A8
_08124C1C:
	.4byte 0x000016EA
_08124C20:
	.4byte 0x000016E8
_08124C24:
	.4byte 0x00001718
	THUMB_FUNC_END sub_08124BA8

