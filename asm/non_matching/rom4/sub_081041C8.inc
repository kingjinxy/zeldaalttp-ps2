	THUMB_FUNC_START sub_081041C8
sub_081041C8: @ 0x081041C8
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r3, _08104240  @ =gRam
	mov r0, #182
	lsl r0, r0, #5
	add r2, r3, r0
	ldr r1, _08104244  @ =0x00001624
	add r0, r3, r1
	ldrb r1, [r0]
	ldr r5, _08104248  @ =0x00001625
	add r0, r3, r5
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r2]
	sub r0, r0, r1
	ldr r1, _0810424C  @ =0x00000978
	add r7, r3, r1
	strh r0, [r7]
	add r5, r5, #159
	add r2, r3, r5
	ldr r1, _08104250  @ =0x00001622
	add r0, r3, r1
	ldrb r1, [r0]
	sub r5, r5, #161
	add r0, r3, r5
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r2]
	sub r0, r0, r1
	ldr r1, _08104254  @ =0x0000097C
	add r6, r3, r1
	strh r0, [r6]
	ldr r2, _08104258  @ =0x000016D5
	add r0, r3, r2
	ldrb r0, [r0]
	lsr r5, r0, #1
	ldr r1, _0810425C  @ =0x00000FB2
	add r0, r3, r1
	add r0, r4, r0
	ldrb r2, [r0]
	add r1, r1, #208
	add r0, r3, r1
	add r0, r4, r0
	ldrb r0, [r0]
	add r1, r3, #0
	cmp r0, #0
	bne _08104236
	ldr r0, _08104260  @ =gUnknown_0817BB90
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r2, r0
	bne _081042A0
_08104236:
	cmp r2, #1
	bls _08104264
	ldrh r0, [r6]
	b _08104266
	.byte 0x00
	.byte 0x00
_08104240:
	.4byte gRam
_08104244:
	.4byte 0x00001624
_08104248:
	.4byte 0x00001625
_0810424C:
	.4byte 0x00000978
_08104250:
	.4byte 0x00001622
_08104254:
	.4byte 0x0000097C
_08104258:
	.4byte 0x000016D5
_0810425C:
	.4byte 0x00000FB2
_08104260:
	.4byte gUnknown_0817BB90
_08104264:
	ldrh r0, [r7]
_08104266:
	add r0, r0, #16
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #31
	bls _08104280
	ldr r2, _0810427C  @ =0x00000F92
	add r0, r1, r2
	add r0, r4, r0
	mov r1, #0
	b _081042A8
	.byte 0x00
	.byte 0x00
_0810427C:
	.4byte 0x00000F92
_08104280:
	mov r2, #32
	ldr r3, _08104298  @ =0x00000FC2
	add r0, r1, r3
	add r0, r4, r0
	strb r2, [r0]
	ldr r5, _0810429C  @ =0x00000F52
	add r1, r1, r5
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _081042AA
_08104298:
	.4byte 0x00000FC2
_0810429C:
	.4byte 0x00000F52
_081042A0:
	ldr r1, _081042B0  @ =0x00000F92
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #0
_081042A8:
	strb r1, [r0]
_081042AA:
	pop {r4-r7}
	pop {r0}
	bx r0
_081042B0:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_081041C8

