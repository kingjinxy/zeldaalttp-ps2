	.ALIGN 2, 0
	.GLOBAL sub_080CF6C0
	.THUMB
	.THUMB_FUNC
	.TYPE sub_080CF6C0, function
sub_080CF6C0:
 
	push {r4-r6,lr} 
	lsl r0, r0, #24 
	lsr r5, r0, #24 
	mov r2, #29 
	ldr r1, _080CF778  @ =gRam 
	ldr r3, _080CF77C  @ =0x000011EF 
	add r0, r1, r3 
	ldrb r0, [r0] 
	add r4, r1, #0 
	cmp r0, #0 
	beq _080CF6F2 
	ldr r6, _080CF780  @ =0x000011D2 
	add r1, r4, r6 
_080CF6DA: 
	lsl r0, r2, #24 
	mov r2, #255 
	lsl r2, r2, #24 
	add r0, r0, r2 
	lsr r2, r0, #24 
	asr r0, r0, #24 
	cmp r0, #0 
	blt _080CF6F8 
	add r0, r0, r1 
	ldrb r0, [r0] 
	cmp r0, #0 
	bne _080CF6DA 
_080CF6F2: 
	lsl r0, r2, #24 
	cmp r0, #0 
	bge _080CF6FA 
_080CF6F8: 
	mov r2, #0 
_080CF6FA: 
	ldr r3, _080CF784  @ =0x00000ED2 
	add r0, r4, r3 
	add r0, r5, r0 
	ldrb r3, [r0] 
	ldr r6, _080CF788  @ =0x00000EF2 
	add r0, r4, r6 
	add r0, r5, r0 
	ldrb r0, [r0] 
	lsl r0, r0, #8 
	add r3, r3, r0 
	add r3, r3, #16 
	lsl r2, r2, #24 
	asr r2, r2, #24 
	ldr r1, _080CF780  @ =0x000011D2 
	add r0, r4, r1 
	add r0, r2, r0 
	mov r1, #10 
	strb r1, [r0] 
	ldr r6, _080CF78C  @ =0x000015F8 
	add r0, r4, r6 
	strb r1, [r0] 
	ldr r0, _080CF790  @ =0x0000122C 
	add r1, r4, r0 
	add r1, r2, r1 
	ldr r6, _080CF794  @ =0x00000EE2 
	add r0, r4, r6 
	add r0, r5, r0 
	ldrb r0, [r0] 
	strb r0, [r1] 
	ldr r0, _080CF798  @ =0x00001268 
	add r1, r4, r0 
	add r1, r2, r1 
	add r6, r6, #32 
	add r0, r4, r6 
	add r0, r5, r0 
	ldrb r0, [r0] 
	strb r0, [r1] 
	ldr r1, _080CF79C  @ =0x0000120E 
	add r0, r4, r1 
	add r0, r2, r0 
	strb r3, [r0] 
	ldr r6, _080CF7A0  @ =0x0000124A 
	add r0, r4, r6 
	add r0, r2, r0 
	lsr r3, r3, #8 
	strb r3, [r0] 
	ldr r0, _080CF7A4  @ =0x0000131C 
	add r1, r4, r0 
	add r1, r2, r1 
	ldr r3, _080CF7A8  @ =0x000010F2 
	add r0, r4, r3 
	add r0, r5, r0 
	ldrb r0, [r0] 
	strb r0, [r1] 
	add r6, r6, #180 
	add r0, r4, r6 
	add r2, r2, r0 
	mov r0, #15 
	strb r0, [r2] 
	pop {r4-r6} 
	pop {r0} 
	bx r0 
	.byte 0x00 
	.byte 0x00 
_080CF778: 
	.4byte gRam 
_080CF77C: 
	.4byte 0x000011EF 
_080CF780: 
	.4byte 0x000011D2 
_080CF784: 
	.4byte 0x00000ED2 
_080CF788: 
	.4byte 0x00000EF2 
_080CF78C: 
	.4byte 0x000015F8 
_080CF790: 
	.4byte 0x0000122C 
_080CF794: 
	.4byte 0x00000EE2 
_080CF798: 
	.4byte 0x00001268 
_080CF79C: 
	.4byte 0x0000120E 
_080CF7A0: 
	.4byte 0x0000124A 
_080CF7A4: 
	.4byte 0x0000131C 
_080CF7A8: 
	.4byte 0x000010F2 
    
