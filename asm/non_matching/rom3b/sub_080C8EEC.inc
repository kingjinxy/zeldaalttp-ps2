	THUMB_FUNC_START sub_080C8EEC
sub_080C8EEC: @ 0x080C8EEC
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r3, r0, #0
	lsl r3, r3, #16
	lsr r3, r3, #16
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r4, _080C8F5C  @ =gRam
	ldr r2, _080C8F60  @ =0x00000C88
	add r0, r4, r2
	ldrh r0, [r0]
	sub r1, r1, r0
	ldr r7, _080C8F64  @ =0x00000C8A
	add r0, r4, r7
	ldrh r5, [r0]
	and r1, r1, r5
	mov r6, #240
	add r0, r1, #0
	and r0, r0, r6
	lsl r0, r0, #2
	mov r2, #128
	lsl r2, r2, #2
	mov r8, r2
	add r2, r1, #0
	mov r7, r8
	and r2, r2, r7
	lsl r2, r2, #4
	orr r0, r0, r2
	mov r2, #128
	lsl r2, r2, #1
	and r1, r1, r2
	lsl r1, r1, #3
	orr r0, r0, r1
	ldr r1, _080C8F68  @ =0x00000C8C
	add r4, r4, r1
	ldrh r1, [r4]
	sub r3, r3, r1
	and r3, r3, r5
	add r1, r3, #0
	and r1, r1, r6
	lsr r1, r1, #3
	orr r0, r0, r1
	add r1, r3, #0
	and r1, r1, r7
	lsl r1, r1, #3
	orr r0, r0, r1
	and r3, r3, r2
	lsl r3, r3, #2
	orr r0, r0, r3
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080C8F5C:
	.4byte gRam
_080C8F60:
	.4byte 0x00000C88
_080C8F64:
	.4byte 0x00000C8A
_080C8F68:
	.4byte 0x00000C8C
	THUMB_FUNC_END sub_080C8EEC

