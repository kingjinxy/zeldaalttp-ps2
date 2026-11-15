	THUMB_FUNC_START sub_080C06EC
sub_080C06EC: @ 0x080C06EC
	push {r4-r7,lr}
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r0, _080C076C  @ =gUnknown_0816E74C
	add r0, r1, r0
	ldrb r2, [r0]
	ldr r3, _080C0770  @ =gRam
	mov r0, #151
	lsl r0, r0, #4
	add r6, r3, r0
	ldrb r0, [r6]
	mul r0, r2, r0
	lsl r0, r0, #16
	lsr r2, r0, #24
	lsr r0, r0, #23
	mov r5, #1
	and r0, r0, r5
	add r2, r2, r0
	mov r4, #150
	lsl r4, r4, #4
	add r0, r3, r4
	mov r4, #0
	strb r2, [r0]
	ldr r7, _080C0774  @ =0x00000961
	add r0, r3, r7
	strb r4, [r0]
	ldr r0, _080C0778  @ =gUnknown_0816E78C
	add r0, r1, r0
	ldrb r2, [r0]
	add r7, r7, #3
	add r0, r3, r7
	strb r2, [r0]
	ldr r2, _080C077C  @ =0x00000965
	add r0, r3, r2
	strb r4, [r0]
	ldr r0, _080C0780  @ =gUnknown_0816E70C
	add r0, r1, r0
	ldrb r2, [r0]
	ldrb r0, [r6]
	mul r0, r2, r0
	lsl r0, r0, #16
	lsr r2, r0, #24
	lsr r0, r0, #23
	and r0, r0, r5
	add r2, r2, r0
	ldr r5, _080C0784  @ =0x00000968
	add r0, r3, r5
	strb r2, [r0]
	add r7, r7, #5
	add r0, r3, r7
	strb r4, [r0]
	ldr r0, _080C0788  @ =gUnknown_0816E7CC
	add r1, r1, r0
	ldrb r1, [r1]
	ldr r2, _080C078C  @ =0x0000096C
	add r0, r3, r2
	strb r1, [r0]
	add r5, r5, #5
	add r3, r3, r5
	strb r4, [r3]
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C076C:
	.4byte gUnknown_0816E74C
_080C0770:
	.4byte gRam
_080C0774:
	.4byte 0x00000961
_080C0778:
	.4byte gUnknown_0816E78C
_080C077C:
	.4byte 0x00000965
_080C0780:
	.4byte gUnknown_0816E70C
_080C0784:
	.4byte 0x00000968
_080C0788:
	.4byte gUnknown_0816E7CC
_080C078C:
	.4byte 0x0000096C
	THUMB_FUNC_END sub_080C06EC

