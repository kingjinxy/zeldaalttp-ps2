	.ALIGN 2, 0
	.GLOBAL sub_080CF0AC
	.THUMB
	.THUMB_FUNC
	.TYPE sub_080CF0AC, function
sub_080CF0AC:
 
	push {r4-r6,lr} 
	sub sp, sp, #8 
	lsl r0, r0, #24 
	lsr r0, r0, #24 
	lsl r1, r1, #24 
	lsr r1, r1, #24 
	ldr r4, _080CF11C  @ =gRam 
	ldr r3, _080CF120  @ =0x00000EE2 
	add r2, r4, r3 
	add r2, r0, r2 
	ldrb r3, [r2] 
	ldr r5, _080CF124  @ =0x00000F02 
	add r2, r4, r5 
	add r2, r0, r2 
	ldrb r2, [r2] 
	lsl r2, r2, #8 
	add r3, r3, r2 
	ldr r6, _080CF128  @ =0x00000952 
	add r2, r4, r6 
	ldrh r2, [r2] 
	sub r3, r3, r2 
	lsl r3, r3, #16 
	lsr r3, r3, #16 
	ldr r2, _080CF12C  @ =0xFFFF0000 
	ldr r5, [sp] 
	and r5, r5, r2 
	orr r5, r5, r3 
	str r5, [sp] 
	ldr r3, _080CF130  @ =0x00000ED2 
	add r2, r4, r3 
	add r2, r0, r2 
	ldrb r2, [r2] 
	ldr r6, _080CF134  @ =0x00000EF2 
	add r3, r4, r6 
	add r0, r0, r3 
	ldrb r0, [r0] 
	lsl r0, r0, #8 
	add r2, r2, r0 
	ldr r0, _080CF138  @ =0x00000958 
	add r4, r4, r0 
	ldrh r0, [r4] 
	sub r2, r2, r0 
	lsl r2, r2, #16 
	ldr r0, _080CF13C  @ =0x0000FFFF 
	and r0, r0, r5 
	orr r0, r0, r2 
	str r0, [sp] 
	add r0, r1, #0 
	mov r1, sp 
	bl sub_0812A324 
	add sp, sp, #8 
	pop {r4-r6} 
	pop {r0} 
	bx r0 
	.byte 0x00 
	.byte 0x00 
_080CF11C: 
	.4byte gRam 
_080CF120: 
	.4byte 0x00000EE2 
_080CF124: 
	.4byte 0x00000F02 
_080CF128: 
	.4byte 0x00000952 
_080CF12C: 
	.4byte 0xFFFF0000 
_080CF130: 
	.4byte 0x00000ED2 
_080CF134: 
	.4byte 0x00000EF2 
_080CF138: 
	.4byte 0x00000958 
_080CF13C: 
	.4byte 0x0000FFFF 
    
