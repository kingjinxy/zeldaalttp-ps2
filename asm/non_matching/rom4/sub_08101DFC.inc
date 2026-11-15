	THUMB_FUNC_START sub_08101DFC
sub_08101DFC: @ 0x08101DFC
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r1, r0, #24
	mov r9, r1
	ldr r5, _08101E8C  @ =gRam
	ldr r2, _08101E90  @ =0x00000996
	add r0, r5, r2
	ldrb r0, [r0]
	add r4, r1, #0
	eor r4, r4, r0
	mov r0, #7
	and r4, r4, r0
	ldr r2, _08101E94  @ =0x00001142
	add r0, r5, r2
	add r0, r1, r0
	ldrb r0, [r0]
	orr r4, r4, r0
	cmp r4, #0
	bne _08101E7E
	ldr r2, _08101E98  @ =0x00000FB2
	add r0, r5, r2
	add r0, r1, r0
	ldrb r0, [r0]
	add r6, r0, #0
	bl GetRandomInt
	mov r1, #3
	mov r8, r1
	and r1, r1, r0
	cmp r6, #1
	bls _08101E44
	add r0, r1, #4
	add r1, r0, #0
_08101E44:
	ldr r7, _08101E9C  @ =gUnknown_08172470
	add r0, r1, r7
	ldrb r1, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r0, r5, r2
	strb r1, [r0]
	ldr r1, _08101EA0  @ =0x00000961
	add r0, r5, r1
	strb r4, [r0]
	bl GetRandomInt
	mov r1, r8
	and r1, r1, r0
	cmp r6, #1
	bls _08101E68
	mov r0, #4
	orr r1, r1, r0
_08101E68:
	add r0, r1, r7
	ldrb r1, [r0]
	ldr r2, _08101EA4  @ =0x00000964
	add r0, r5, r2
	strb r1, [r0]
	ldr r1, _08101EA8  @ =0x00000965
	add r0, r5, r1
	strb r4, [r0]
	mov r0, r9
	bl sub_080C9A48
_08101E7E:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08101E8C:
	.4byte gRam
_08101E90:
	.4byte 0x00000996
_08101E94:
	.4byte 0x00001142
_08101E98:
	.4byte 0x00000FB2
_08101E9C:
	.4byte gUnknown_08172470
_08101EA0:
	.4byte 0x00000961
_08101EA4:
	.4byte 0x00000964
_08101EA8:
	.4byte 0x00000965
	THUMB_FUNC_END sub_08101DFC

