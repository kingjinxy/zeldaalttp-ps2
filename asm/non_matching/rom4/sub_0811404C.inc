	THUMB_FUNC_START sub_0811404C
sub_0811404C: @ 0x0811404C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r4, r1, #0
	ldr r3, _081140A4  @ =gRam
	ldr r2, _081140A8  @ =0x00000F52
	add r0, r3, r2
	add r5, r1, r0
	ldrb r0, [r5]
	cmp r0, #3
	bne _08114070
	ldr r2, _081140AC  @ =0x00000D94
	add r0, r3, r2
	add r0, r1, r0
	ldrb r2, [r0]
	mov r1, #48
	orr r1, r1, r2
	strb r1, [r0]
_08114070:
	ldr r1, _081140B0  @ =0x00000F92
	add r0, r3, r1
	add r0, r4, r0
	ldrb r1, [r0]
	lsl r1, r1, #4
	ldr r0, _081140B4  @ =gUnknown_0817D8A0
	add r1, r1, r0
	add r0, r4, #0
	mov r2, #2
	bl sub_080C9480
	mov r1, #128
	lsl r1, r1, #2
	mov r0, #2
	bl sub_080C6174
	ldrb r0, [r5]
	cmp r0, #3
	bne _0811409C
	add r0, r4, #0
	bl sub_080C6230
_0811409C:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081140A4:
	.4byte gRam
_081140A8:
	.4byte 0x00000F52
_081140AC:
	.4byte 0x00000D94
_081140B0:
	.4byte 0x00000F92
_081140B4:
	.4byte gUnknown_0817D8A0
	THUMB_FUNC_END sub_0811404C

