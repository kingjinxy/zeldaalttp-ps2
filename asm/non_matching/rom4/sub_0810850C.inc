	THUMB_FUNC_START sub_0810850C
sub_0810850C: @ 0x0810850C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	ldr r5, _08108598  @ =gRam
	ldr r0, _0810859C  @ =0x00000F62
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810853E
	ldr r0, _081085A0  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _081085A4  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #192
	strb r1, [r0]
_0810853E:
	add r0, r4, #0
	bl sub_080C1F70
	add r0, r4, #0
	bl sub_080C7A48
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810856A
	ldr r0, _081085A8  @ =0x00000FB2
	add r2, r5, r0
	add r2, r4, r2
	ldrb r0, [r2]
	add r0, r0, #1
	mov r1, #3
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _081085AC  @ =0x00000FD2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #8
	strb r1, [r0]
_0810856A:
	ldr r0, _081085B0  @ =0x00000F22
	add r1, r5, r0
	add r1, r6, r1
	ldr r3, _081085B4  @ =gUnknown_0817C1F4
	add r0, r0, #144
	add r2, r5, r0
	add r2, r6, r2
	ldrb r0, [r2]
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _081085B8  @ =0x00000F12
	add r1, r5, r0
	add r1, r6, r1
	ldr r3, _081085BC  @ =gUnknown_0817C1F8
	ldrb r0, [r2]
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r1]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08108598:
	.4byte gRam
_0810859C:
	.4byte 0x00000F62
_081085A0:
	.4byte 0x00000F52
_081085A4:
	.4byte 0x00000FC2
_081085A8:
	.4byte 0x00000FB2
_081085AC:
	.4byte 0x00000FD2
_081085B0:
	.4byte 0x00000F22
_081085B4:
	.4byte gUnknown_0817C1F4
_081085B8:
	.4byte 0x00000F12
_081085BC:
	.4byte gUnknown_0817C1F8
	THUMB_FUNC_END sub_0810850C

