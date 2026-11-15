	THUMB_FUNC_START sub_0810FA94
sub_0810FA94: @ 0x0810FA94
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	ldr r5, _0810FAEC  @ =gRam
	ldr r1, _0810FAF0  @ =0x00001052
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #3
	ldr r1, _0810FAF4  @ =gUnknown_0817D378
	add r0, r0, r1
	ldrb r2, [r0, #4]
	ldr r3, _0810FAF8  @ =0x0000096C
	add r1, r5, r3
	strh r2, [r1]
	ldr r1, [r0]
	add r0, r4, #0
	bl sub_080C94D0
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810FB18
	add r0, r4, #0
	bl sub_080C5080
	ldr r1, _0810FAFC  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0810FB18
	bl sub_0810FB20
	cmp r0, #0
	beq _0810FB00
	add r0, r4, #0
	bl sub_0810F740
	b _0810FB18
_0810FAEC:
	.4byte gRam
_0810FAF0:
	.4byte 0x00001052
_0810FAF4:
	.4byte gUnknown_0817D378
_0810FAF8:
	.4byte 0x0000096C
_0810FAFC:
	.4byte 0x00000FC2
_0810FB00:
	add r0, r6, #0
	mov r1, #82
	mov r2, sp
	bl sub_080C94F4
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810FB18
	add r0, r6, #0
	mov r1, #64
	bl sub_080CF0AC
_0810FB18:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810FA94

