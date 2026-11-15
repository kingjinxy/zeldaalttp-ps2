	THUMB_FUNC_START sub_0812663C
sub_0812663C: @ 0x0812663C
	push {r4,lr}
	ldr r0, _0812669C  @ =gUnknown_03000050
	ldrh r1, [r0, #8]
	add r1, r1, #1
	strh r1, [r0, #8]
	bl sub_08125874
	bl sub_08126DDC
	bl sub_08126DB0
	bl sub_0812E0A0
	ldr r3, _081266A0  @ =gRam
	ldr r0, _081266A4  @ =0x000009E8
	add r4, r3, r0
	ldrh r0, [r4]
	sub r0, r0, #1
	strh r0, [r4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08126696
	ldr r1, _081266A8  @ =0x000009D3
	add r0, r3, r1
	mov r2, #2
	strb r2, [r0]
	ldr r0, _081266AC  @ =0x000009D4
	add r1, r3, r0
	mov r0, #34
	strb r0, [r1]
	ldr r0, _081266B0  @ =0x00000CF8
	add r1, r3, r0
	mov r0, #31
	strh r0, [r1]
	ldr r1, _081266B4  @ =0x000009B5
	add r0, r3, r1
	strb r2, [r0]
	ldr r0, _081266B8  @ =0x000009AD
	add r1, r3, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #136
	lsl r0, r0, #2
	strh r0, [r4]
_08126696:
	pop {r4}
	pop {r0}
	bx r0
_0812669C:
	.4byte gUnknown_03000050
_081266A0:
	.4byte gRam
_081266A4:
	.4byte 0x000009E8
_081266A8:
	.4byte 0x000009D3
_081266AC:
	.4byte 0x000009D4
_081266B0:
	.4byte 0x00000CF8
_081266B4:
	.4byte 0x000009B5
_081266B8:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0812663C

