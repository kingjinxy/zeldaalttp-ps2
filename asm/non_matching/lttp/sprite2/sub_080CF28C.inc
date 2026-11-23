	.ALIGN 2, 0
	.GLOBAL sub_080CF28C
	.THUMB
	.THUMB_FUNC
	.TYPE sub_080CF28C, function
sub_080CF28C:
 
	push {r4-r7,lr} 
	mov r7, r10 
	mov r6, r9 
	mov r5, r8 
	push {r5-r7} 
	lsl r0, r0, #24 
	lsr r0, r0, #24 
	mov r12, r0 
	lsl r1, r1, #24 
	lsr r6, r1, #24 
	ldr r7, _080CF2C0  @ =gRam 
	lsl r1, r0, #1 
	ldr r2, _080CF2C4  @ =0x0000162A 
	add r0, r7, r2 
	add r5, r1, r0 
	ldrh r2, [r5] 
	add r0, r2, r6 
	lsl r0, r0, #16 
	lsr r3, r0, #16 
	ldr r0, _080CF2C8  @ =gUnknown_08172FC8 
	add r4, r1, r0 
	ldrh r0, [r4] 
	cmp r3, r0 
	bcs _080CF2CC 
	strh r3, [r5] 
	b _080CF300 
_080CF2C0: 
	.4byte gRam 
_080CF2C4: 
	.4byte 0x0000162A 
_080CF2C8: 
	.4byte gUnknown_08172FC8 
_080CF2CC: 
	ldr r2, _080CF324  @ =0x00001636 
	add r0, r7, r2 
	add r1, r1, r0 
	mov r8, r1 
	ldr r0, _080CF328  @ =gUnknown_08172FD4 
	mov r10, r0 
	ldrh r7, [r4] 
	ldrh r4, [r1] 
	mov r2, #7 
	mov r9, r2 
	mov r0, r12 
	lsl r5, r0, #4 
_080CF2E4: 
	add r0, r4, #0 
	add r3, r0, #1 
	add r4, r3, #0 
	mov r1, r9 
	and r1, r1, r0 
	lsl r1, r1, #1 
	add r1, r1, r5 
	add r1, r1, r10 
	ldrh r2, [r1] 
	add r0, r2, r6 
	cmp r0, r7 
	bgt _080CF2E4 
	mov r0, r8 
	strh r3, [r0] 
_080CF300: 
	add r1, r2, #0 
	mov r2, #128 
	lsl r2, r2, #4 
	add r0, r1, r2 
	lsl r0, r0, #16 
	lsr r2, r0, #16 
	lsr r1, r1, #2 
	ldr r0, _080CF32C  @ =gUnknown_03003E74 
	strh r1, [r0] 
	add r0, r2, #0 
	pop {r3-r5} 
	mov r8, r3 
	mov r9, r4 
	mov r10, r5 
	pop {r4-r7} 
	pop {r1} 
	bx r1 
	.byte 0x00 
	.byte 0x00 
_080CF324: 
	.4byte 0x00001636 
_080CF328: 
	.4byte gUnknown_08172FD4 
_080CF32C: 
	.4byte gUnknown_03003E74 
    
