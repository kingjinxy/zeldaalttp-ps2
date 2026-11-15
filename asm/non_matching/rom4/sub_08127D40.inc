	THUMB_FUNC_START sub_08127D40
sub_08127D40: @ 0x08127D40
	push {lr}
	ldr r2, _08127D74  @ =gRam
	ldr r1, _08127D78  @ =0x00000547
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _08127D92
	mov r0, #192
	lsl r0, r0, #18
	ldrb r0, [r0, #6]
	cmp r0, #0
	bne _08127D84
	ldr r0, _08127D7C  @ =0x00001ACD
	add r3, r2, r0
	ldrb r0, [r3]
	cmp r0, #1
	bls _08127D92
	ldr r0, _08127D80  @ =0x00001ACE
	add r1, r2, r0
	mov r0, #1
	strb r0, [r1]
	strb r0, [r3]
	b _08127D92
	.byte 0x00
	.byte 0x00
_08127D74:
	.4byte gRam
_08127D78:
	.4byte 0x00000547
_08127D7C:
	.4byte 0x00001ACD
_08127D80:
	.4byte 0x00001ACE
_08127D84:
	ldr r1, _08127DB0  @ =0x00001ACD
	add r0, r2, r1
	mov r1, #0
	strb r1, [r0]
	ldr r3, _08127DB4  @ =0x00001ACE
	add r0, r2, r3
	strb r1, [r0]
_08127D92:
	ldr r1, _08127DB0  @ =0x00001ACD
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #1
	bls _08127D9E
	mov r0, #2
_08127D9E:
	ldr r1, _08127DB8  @ =gUnknown_08180BC0
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_08127DB0:
	.4byte 0x00001ACD
_08127DB4:
	.4byte 0x00001ACE
_08127DB8:
	.4byte gUnknown_08180BC0
	THUMB_FUNC_END sub_08127D40

