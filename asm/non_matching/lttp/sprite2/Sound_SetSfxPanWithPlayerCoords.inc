	.ALIGN 2, 0
	.GLOBAL Sound_SetSfxPanWithPlayerCoords
	.THUMB
	.THUMB_FUNC
	.TYPE Sound_SetSfxPanWithPlayerCoords, function
Sound_SetSfxPanWithPlayerCoords:
 
	push {r4,r5,lr} 
	sub sp, sp, #8 
	lsl r0, r0, #24 
	lsr r0, r0, #24 
	ldr r4, _080CF230  @ =gRam 
	ldr r2, _080CF234  @ =0x000016C4 
	add r1, r4, r2 
	ldrb r3, [r1] 
	ldr r5, _080CF238  @ =0x000016C5 
	add r1, r4, r5 
	ldrb r1, [r1] 
	lsl r1, r1, #24 
	asr r1, r1, #24 
	lsl r1, r1, #8 
	add r3, r3, r1 
	ldr r2, _080CF23C  @ =0x00000952 
	add r1, r4, r2 
	ldrh r1, [r1] 
	sub r3, r3, r1 
	lsl r3, r3, #16 
	sub r5, r5, #5 
	add r1, r4, r5 
	ldrb r2, [r1] 
	add r5, r5, #1 
	add r1, r4, r5 
	ldrb r1, [r1] 
	lsl r1, r1, #24 
	asr r1, r1, #24 
	lsl r1, r1, #8 
	add r2, r2, r1 
	ldr r1, _080CF240  @ =0x00000958 
	add r4, r4, r1 
	ldrh r1, [r4] 
	sub r2, r2, r1 
	lsl r2, r2, #16 
	lsr r3, r3, #16 
	orr r3, r3, r2 
	str r3, [sp] 
	mov r1, sp 
	bl sub_0812A324 
	add sp, sp, #8 
	pop {r4,r5} 
	pop {r0} 
	bx r0 
	.byte 0x00 
	.byte 0x00 
_080CF230: 
	.4byte gRam 
_080CF234: 
	.4byte 0x000016C4 
_080CF238: 
	.4byte 0x000016C5 
_080CF23C: 
	.4byte 0x00000952 
_080CF240: 
	.4byte 0x00000958 
    
