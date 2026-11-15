	THUMB_FUNC_START sub_0810411C
sub_0810411C: @ 0x0810411C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r4, r5, #0
	ldr r6, _0810415C  @ =gRam
	ldr r1, _08104160  @ =0x00000F62
	add r0, r6, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0810416C
	add r0, r5, #0
	bl sub_0810441C
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _081041B8
	ldr r1, _08104164  @ =gUnknown_0817BB88
	ldr r2, _08104168  @ =0x00000F52
	add r0, r6, r2
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
	b _081041B8
_0810415C:
	.4byte gRam
_08104160:
	.4byte 0x00000F62
_08104164:
	.4byte gUnknown_0817BB88
_08104168:
	.4byte 0x00000F52
_0810416C:
	add r0, r4, #0
	bl sub_080C58F0
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _081041B8
	add r0, r4, #0
	bl sub_0810449C
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C500C
	ldr r1, _081041C0  @ =0x00000FC2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r5, [r0]
	cmp r5, #0
	bne _081041B8
	add r0, r4, #0
	bl sub_080C7A20
	lsl r0, r0, #24
	cmp r0, #0
	beq _081041B8
	ldr r2, _081041C4  @ =0x00000FA2
	add r0, r6, r2
	add r0, r4, r0
	strb r5, [r0]
	add r0, r4, #0
	mov r1, #44
	bl sub_080CF140
_081041B8:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081041C0:
	.4byte 0x00000FC2
_081041C4:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_0810411C

