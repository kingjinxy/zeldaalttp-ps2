	THUMB_FUNC_START sub_081061BC
sub_081061BC: @ 0x081061BC
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _081061F4  @ =gRam
	ldr r1, _081061F8  @ =0x00000FD2
	add r0, r3, r1
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08106208
	ldr r4, _081061FC  @ =0x00001770
	add r0, r3, r4
	mov r1, #1
	strb r1, [r0]
	add r4, r4, #157
	add r0, r3, r4
	strb r1, [r0]
	ldr r1, _08106200  @ =gUnknown_0817BF0C
	ldr r4, _08106204  @ =0x00000FB2
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	bl sub_081064F8
	b _0810621E
	.byte 0x00
	.byte 0x00
_081061F4:
	.4byte gRam
_081061F8:
	.4byte 0x00000FD2
_081061FC:
	.4byte 0x00001770
_08106200:
	.4byte gUnknown_0817BF0C
_08106204:
	.4byte 0x00000FB2
_08106208:
	ldr r0, _08106224  @ =0x00000F92
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r4, #184
	lsl r4, r4, #5
	add r1, r3, r4
	mov r0, #12
	strb r0, [r1]
_0810621E:
	pop {r4}
	pop {r0}
	bx r0
_08106224:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_081061BC

